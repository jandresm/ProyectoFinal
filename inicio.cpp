#include "inicio.h"
#include "ui_inicio.h"

Inicio::Inicio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inicio)
{
    ui->setupUi(this);
}

Inicio::~Inicio()
{
    delete ui;
}

void Inicio::on_pushButton_clicked()
{
    Dialog *usuario=new Dialog;
    usuario->show();
    close();
}
void read(QString name){
    QFile myFile(name);

    if(!myFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug () << "No se pudo abrir el archivo.";
        return;
    }
    QTextStream in(&myFile);
    QString text=in.readAll();
    qDebug()<<text;
    myFile.close();
}
