#ifndef INICIO_H
#define INICIO_H

#include <Usuario.h>

#include <QString>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

#include <QDialog>

namespace Ui {
class Inicio;
}

class Inicio : public QDialog
{
    Q_OBJECT

public:
    explicit Inicio(QWidget *parent = 0);
    ~Inicio();
    void read(QString name);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Inicio *ui;
};

#endif // INICIO_H
