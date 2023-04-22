#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("DuckChat服务端");
    connect(&server,SIGNAL(playerConnected()),this,SLOT(playerConnected()));
    connect(&server,SIGNAL(getMessage()),this,SLOT(getMessage()));
    connect(ui->send,SIGNAL(returnPressed()),this,SLOT(on_pushButton_clicked()));
    connect(ui->port,SIGNAL(returnPressed()),this,SLOT(on_startButton_clicked()));
    connect(ui->nameEdit,SIGNAL(returnPressed()),this,SLOT(next()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::playerConnected()
{

    text.append("一只鸭子加入聊天室...\n");
    ui->textEdit->setText(text);
}

void Widget::getMessage()
{
    text.append(server.getContent()+"\n");
    ui->textEdit->setText(text);
}


void Widget::on_pushButton_clicked()
{
    text.append(ui->nameEdit->text()+": "+ui->send->text()+"\n");
    ui->textEdit->setText(text);
    server.sendData(ui->nameEdit->text()+": "+ui->send->text());
    ui->send->clear();
}


void Widget::on_startButton_clicked()
{
    if(ui->port->text().toInt()/1000>1){
        server.Connect(ui->port->text().toInt());
        text=QString("PORT:"+ui->port->text()+"\n聊天室创建成功...\n");
        ui->textEdit->setText(text);}
    else{
        text=QString("端口号不正确\n");
        ui->textEdit->setText(text);}
    ui->nameEdit->setFocus();
}

void Widget::next()
{
    ui->send->setFocus();
}


