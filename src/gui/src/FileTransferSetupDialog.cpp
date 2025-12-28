/*
 * InputLeap -- mouse and keyboard sharing utility
 * Copyright (C) 2012-2016 Symless Ltd.
 *
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file LICENSE that should have accompanied this file.
 *
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "FileTransferSetupDialog.h"
#include "ui_FileTransferSetupDialog.h"
#include "Screen.h"

#include <QHostInfo>
#include <QMessageBox>

FileTransferSetupDialog::FileTransferSetupDialog(QWidget* parent, Screen* pScreen) :
    QDialog(parent, Qt::WindowTitleHint | Qt::WindowSystemMenuHint),
    ui_(std::make_unique<Ui::FileTransferSetupDialog>()),
    m_pScreen(pScreen)
{
    ui_->setupUi(this);

    if (m_pScreen) {
        // Load existing settings
        ui_->m_pLineEditIP->setText(m_pScreen->fileTransferIP());
        ui_->m_pLineEditUsername->setText(m_pScreen->fileTransferUsername());
        ui_->m_pLineEditPassword->setText(m_pScreen->fileTransferPassword());
        ui_->m_pLineEditPath->setText(m_pScreen->fileTransferPath());

        // Set the dialog title to include screen name
        setWindowTitle(tr("Setup File Transfer for '%1'").arg(m_pScreen->name()));
    }

    // Set label to show what IP address this server is running on
    QString localHostname = QHostInfo::localHostName();
    QString localIP = "Auto-detected";
    
    // Try to get local IP
    for (const auto& address : QHostInfo::fromName(localHostname).addresses()) {
        if (address.protocol() == QAbstractSocket::IPv4Protocol && !address.isLoopback()) {
            localIP = address.toString();
            break;
        }
    }

    ui_->m_pLabelServerInfo->setText(
        tr("Server: %1 (%2)\n\n"
           "Enter the client machine's IP address and file transfer location.").arg(localHostname, localIP)
    );
}

FileTransferSetupDialog::~FileTransferSetupDialog()
{
}

void FileTransferSetupDialog::accept()
{
    if (!m_pScreen) {
        QDialog::accept();
        return;
    }

    QString ip = ui_->m_pLineEditIP->text().trimmed();
    QString username = ui_->m_pLineEditUsername->text().trimmed();
    QString password = ui_->m_pLineEditPassword->text();
    QString path = ui_->m_pLineEditPath->text().trimmed();

    if (ip.isEmpty()) {
        QMessageBox::warning(this, tr("File Transfer Setup"),
                            tr("Please enter the client's IP address."));
        return;
    }

    if (path.isEmpty()) {
        QMessageBox::warning(this, tr("File Transfer Setup"),
                            tr("Please enter the upload path."));
        return;
    }

    // Save settings to screen
    m_pScreen->setFileTransferIP(ip);
    m_pScreen->setFileTransferUsername(username);
    m_pScreen->setFileTransferPassword(password);
    m_pScreen->setFileTransferPath(path);

    QDialog::accept();
}
