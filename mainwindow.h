#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define DT 0.02

#include <inicio.h>
#include "personaje.h"
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QTimer>
#include "armas.h"

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void mover();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QTimer *timer;
    Personaje *cari;
    Armas *arma;
};

#endif // MAINWINDOW_H
