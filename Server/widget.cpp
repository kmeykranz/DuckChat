#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Chat Group");
    text=QString("IP:127.0.0.1  PORT:8888\n聊天室创建成功...\n");
    ui->textEdit->setText(text);
    connect(&server,SIGNAL(playerConnected()),this,SLOT(playerConnected()));
    connect(&server,SIGNAL(getMessage()),this,SLOT(getMessage()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::playerConnected()
{

    text.append("一名同学加入聊天室...\n");
    ui->textEdit->setText(text);
}

void Widget::getMessage()
{
    text.append("对方:"+server.getContent()+"\n");
    ui->textEdit->setText(text);
}


void Widget::on_pushButton_clicked()
{
    text.append("我:"+ui->send->toPlainText()+"\n");
    ui->textEdit->setText(text);
    server.sendData(ui->send);
    ui->send->clear();
}

