#include "personaje.h"

Personaje::Personaje()
{
   setRect(-100,-100,100,100);
}

void Personaje::keyPressEvent(QEvent *event)
{

    if(event->KeyPress == Qt::Key_E){
        setPos(x()-10,y());
    }
    else if(event->KeyPress == Qt::Key_A){
        setPos(x()+10,y());
    }
    if(event->KeyPress == Qt::Key_W){
        setPos(x(),y()-10);
    }
    if(event->KeyPress == Qt::Key_Z){
        setPos(x(),y()-10);
    }

}
