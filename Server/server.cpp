#include "server.h"

Server::Server(QObject *parent)
    : QTcpServer{parent}
{
    listen(QHostAddress::Any,8888); //开启端口
}
void Server::incomingConnection(qintptr handle){
    socket.setSocketDescriptor(handle);
    emit playerConnected();
    connect(&socket,SIGNAL(readyRead()),this,SLOT(receiveData()));
}

void Server::receiveData()
{
    QByteArray message=socket.readAll();
    str=message.data();
    emit getMessage();
}

void Server::sendData(QTextEdit *text)
{
    QString str=text->toPlainText();
    socket.write(str.toUtf8());
}

QString Server::getContent()
{
    return str;
}

