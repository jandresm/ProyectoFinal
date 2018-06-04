#ifndef PERSONAJE_H
#define PERSONAJE_H


#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QEvent>
#include <QDebug>

class Personaje : public QGraphicsRectItem
{
public:
    Personaje();
    void keyPressEvent(QEvent *event);
};

#endif // PERSONAJE_H
