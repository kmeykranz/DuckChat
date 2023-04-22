#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "server.h"
#include <QLineEdit>
#include <QTextEdit>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
signals:
    void returnPressed();
private slots:
    void playerConnected();
    void getMessage();
    void on_pushButton_clicked();
    void on_startButton_clicked();
    void next();
private:
    Ui::Widget *ui;
    Server server;
    QString text;
};
#endif // WIDGET_H
