/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QLineEdit *ip;
    QLineEdit *port;
    QPushButton *connectButton;
    QTextEdit *receive;
    QTextEdit *send;
    QPushButton *sendButton;

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(400, 300);
        Client->setMinimumSize(QSize(400, 300));
        Client->setMaximumSize(QSize(400, 300));
        ip = new QLineEdit(Client);
        ip->setObjectName(QString::fromUtf8("ip"));
        ip->setGeometry(QRect(10, 10, 151, 31));
        port = new QLineEdit(Client);
        port->setObjectName(QString::fromUtf8("port"));
        port->setGeometry(QRect(180, 10, 121, 31));
        connectButton = new QPushButton(Client);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(320, 10, 71, 31));
        receive = new QTextEdit(Client);
        receive->setObjectName(QString::fromUtf8("receive"));
        receive->setGeometry(QRect(10, 60, 381, 161));
        receive->setReadOnly(true);
        send = new QTextEdit(Client);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(10, 240, 291, 51));
        sendButton = new QPushButton(Client);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(310, 240, 81, 51));

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QWidget *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Client", nullptr));
        ip->setPlaceholderText(QCoreApplication::translate("Client", "IP\345\234\260\345\235\200", nullptr));
        port->setPlaceholderText(QCoreApplication::translate("Client", "Port\347\253\257\345\217\243", nullptr));
        connectButton->setText(QCoreApplication::translate("Client", "Connect", nullptr));
        sendButton->setText(QCoreApplication::translate("Client", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
