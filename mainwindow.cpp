#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene= new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    cari=new Personaje();
    scene->addItem(cari);

    cari->setFlag(QGraphicsItem::ItemIsFocusable);
    cari->setFocus();

    arma= new Armas();
    scene->addItem(arma);

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(mover()));
    timer->start(1);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mover()
{
    arma->actualizar(DT);
}
