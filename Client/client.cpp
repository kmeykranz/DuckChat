#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Client)
{
    this->setWindowTitle("Chat Group");
    ui->setupUi(this);
    text="请输入IP和PORT连接聊天室\n";
    ui->receive->setText(text);
}

void Client::receiveData()
{
    QByteArray message=socket.readAll();
    text=text+"对方:"+message.data()+"\n";
    ui->receive->setText(text);
}

void Client::on_connectButton_clicked()
{
    socket.connectToHost(ui->ip->text(),ui->port->text().toInt());
    connect(&socket,SIGNAL(readyRead()),this,SLOT(receiveData()));
    text.append("成功连接聊天室...\n");
    ui->receive->setText(text);
}


void Client::on_sendButton_clicked()
{
    QString str=ui->send->toPlainText();
    text=text+"我:"+str+"\n";
    ui->receive->setText(text);
    socket.write(str.toUtf8());
    ui->send->clear();
}

