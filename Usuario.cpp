#include "Usuario.h"
#include "ui_Usuario.h"

void write(QString name,QString text);

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    MainWindow *principal=new MainWindow();
    principal->show();
    Id=ui->lineEdit->text();
    contrasena=ui->lineEdit_2->text();
    //write(Id,contrasena);
    close();
}

void write(QString name,QString text){
    QFile myFile(name);

    if(!myFile.open(QFile::WriteOnly | QFile::Text)){
        qDebug () << "No se pudo abrir el archivo.";
        return;
    }
    QTextStream out(&myFile);
    out << name <<"/t"<<text;

    myFile.flush();
    myFile.close();
}

