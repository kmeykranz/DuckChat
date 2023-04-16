#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTextEdit>

class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    QString getContent();
    void sendData(QTextEdit *text);
private:
    QTcpSocket socket;
    QString str;

private slots:
    void incomingConnection(qintptr handle);
    void receiveData();
signals:
    void playerConnected();
    void getMessage();
};

#endif // SERVER_H
