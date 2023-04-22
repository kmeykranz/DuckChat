#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>
#include <QObject>
#include <QTcpSocket>
#include <QLineEdit>
#include <qbytearray.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Client; }
QT_END_NAMESPACE

class Client : public QWidget
{
    Q_OBJECT

public:
    Client(QWidget *parent = nullptr);
    void Connect();
private slots:
    void receiveData();
    void on_connectButton_clicked();
    void on_sendButton_clicked();
    void next();
private:
    QTcpSocket socket;
    Ui::Client *ui;
    QString text;
};
#endif // CLIENT_H
