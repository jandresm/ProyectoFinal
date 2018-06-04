#ifndef DIALOG_H
#define DIALOG_H
#include <mainwindow.h>

#include <QString>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void write(QString name,QString text);


private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    QString Id;
    QString contrasena;
    int vida=100;
};

#endif // DIALOG_H
