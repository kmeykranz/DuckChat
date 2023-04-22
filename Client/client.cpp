//made by kevinwu06
#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);
    this->setWindowTitle("DuckChat客户端");
    ui->receive->setText(text);
    connect(ui->ip,SIGNAL(returnPressed()),this,SLOT(next()));
    connect(ui->port,SIGNAL(returnPressed()),this,SLOT(on_connectButton_clicked()));
    connect(ui->nameEdit,SIGNAL(returnPressed()),this,SLOT(next()));
    connect(ui->send,SIGNAL(returnPressed()),this,SLOT(on_sendButton_clicked()));
}

void Client::receiveData()
{
    QByteArray message=socket.readAll();
    text=text+message.data()+"\n";
    ui->receive->setText(text);
}

void Client::on_connectButton_clicked()
{
    socket.connectToHost(ui->ip->text(),ui->port->text().toInt());
    if(socket.waitForConnected(1000)){
        text.append("成功连接聊天室...\n");
        ui->nameEdit->setFocus();
    }
    else{
        text.append("连接失败...\n");
    }
    connect(&socket,SIGNAL(readyRead()),this,SLOT(receiveData()));

    ui->receive->setText(text);
}


void Client::on_sendButton_clicked()
{
    QString new_text=ui->nameEdit->text()+": "+ui->send->text();
    text.append(new_text).append("\n");
    ui->receive->setText(text);
    socket.write(new_text.toUtf8());
    ui->send->clear();
    ui->send->setFocus();
}

void Client::next()
{
    QLineEdit *lineEdit = (QLineEdit *)sender();
        if (lineEdit == ui->ip) {
            ui->port->setFocus();
        } else if (lineEdit == ui->nameEdit) {
            ui->send->setFocus();
        }
}

