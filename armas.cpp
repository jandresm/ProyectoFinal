#include "armas.h"

Armas::Armas()
{
    setRect(0,0,50,50);
    //mov= new CaidaLibre(0,0);
   movimiento=new MovParabolico(0,0,20,20); //movimiento parabolico
   movimiento->setVel(20,20); //movimiento parabolico
}

void Armas::actualizar(float dt)
{
    movimiento->actualizar(dt);
    setPos(movimiento->getX(),movimiento->getY());
}
