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
#include <QtWidgets/QLabel>
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
    QPushButton *sendButton;
    QLineEdit *nameEdit;
    QLineEdit *send;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(380, 400);
        Client->setMinimumSize(QSize(380, 400));
        Client->setMaximumSize(QSize(380, 400));
        Client->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border: none;\n"
"}\n"
"QLineEdit {\n"
"      border: 0.5px solid rgb(147, 150, 154);\n"
"      border-radius: 6px;\n"
"      background-color: rgba(40, 44, 52,150);\n"
"      min-width: 80px;\n"
"	  font-family: \"Microsoft YaHei\";\n"
"	  font-size:11pt;\n"
"	  font-weight: bold;\n"
"	  color:rgb(147, 150, 154);\n"
"  }"));
        ip = new QLineEdit(Client);
        ip->setObjectName(QString::fromUtf8("ip"));
        ip->setGeometry(QRect(10, 10, 151, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font.setPointSize(11);
        font.setBold(true);
        ip->setFont(font);
        ip->setStyleSheet(QString::fromUtf8(""));
        port = new QLineEdit(Client);
        port->setObjectName(QString::fromUtf8("port"));
        port->setGeometry(QRect(170, 10, 121, 31));
        port->setStyleSheet(QString::fromUtf8(""));
        connectButton = new QPushButton(Client);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(300, 10, 62, 31));
        connectButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"      border: 0.5px solid white;\n"
"      border-radius: 6px;\n"
"      background-color: rgb(90,194,198);\n"
"      min-width: 60px;\n"
"	  font-family: \"Microsoft YaHei\";\n"
"	  font-size:10pt;\n"
"	  font-weight: bold;\n"
"	  color:white;\n"
"  }\n"
" QPushButton:hover {\n"
"	border: 0.5px solid white;\n"
"      border-radius: 6px;\n"
"      background-color: #1fab89;\n"
"      min-width: 60px;\n"
"	  font-family: \"Microsoft YaHei\";\n"
"	  font-size:9pt;\n"
"	  font-weight: bold;\n"
"	  color:white;\n"
" }"));
        receive = new QTextEdit(Client);
        receive->setObjectName(QString::fromUtf8("receive"));
        receive->setGeometry(QRect(10, 90, 361, 241));
        receive->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"      border: 0.5px solid rgb(147, 150, 154);\n"
"      border-radius: 6px;\n"
"      background-color: rgba(40, 44, 52, 150);\n"
"      min-width: 80px;\n"
"	  font-family: \"Microsoft YaHei\";\n"
"	  font-size:11pt;\n"
"	  font-weight: bold;\n"
"	  color:rgb(215, 215, 215);\n"
"  }"));
        receive->setLineWidth(2);
        receive->setReadOnly(true);
        sendButton = new QPushButton(Client);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(290, 340, 81, 51));
        sendButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"      border: 0.5px solid white;\n"
"      border-radius: 6px;\n"
"      background-color: rgb(90,194,198);\n"
"      min-width: 50px;\n"
"	  font-family: \"Microsoft YaHei\";\n"
"	  font-size:11pt;\n"
"	  font-weight: bold;\n"
"	  color:white;\n"
"  }\n"
" QPushButton:hover {\n"
"	border: 0.5px solid white;\n"
"      border-radius: 6px;\n"
"      background-color: #1fab89;\n"
"      min-width: 50px;\n"
"	  font-family: \"Microsoft YaHei\";\n"
"	  font-size:10pt;\n"
"	  font-weight: bold;\n"
"	  color:white;\n"
" }"));
        nameEdit = new QLineEdit(Client);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(10, 50, 151, 31));
        nameEdit->setStyleSheet(QString::fromUtf8(""));
        send = new QLineEdit(Client);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(10, 340, 271, 51));
        send->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"color:rgb(215, 215, 215);\n"
"}"));
        label = new QLabel(Client);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 381, 401));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border-image: url(:/Images/duckl.png);\n"
"}"));
        label_2 = new QLabel(Client);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 70, 231, 16));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(147, 150, 154);\n"
"}"));
        label->raise();
        ip->raise();
        port->raise();
        connectButton->raise();
        receive->raise();
        sendButton->raise();
        nameEdit->raise();
        send->raise();
        label_2->raise();

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
        nameEdit->setPlaceholderText(QCoreApplication::translate("Client", "\346\230\276\347\244\272\345\220\215\347\247\260", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Client", "\345\274\200\345\217\221\350\200\205:Kevinwu  Github:kevinwu06", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
