#include "server.h"

Server::Server(QObject *parent)
    : QTcpServer{parent}
{
}

void Server::Connect(int port)
{
    listen(QHostAddress::Any,port); //开启端口
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

void Server::sendData(QString text)
{
    socket.write(text.toUtf8());
}

QString Server::getContent()
{
    return str;
}

