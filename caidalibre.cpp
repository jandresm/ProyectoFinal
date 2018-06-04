#include "caidalibre.h"

CaidaLibre::CaidaLibre(float _x, float _y): x(_x), y(_y)
{

}

void CaidaLibre::actualizar(float dt)
{
    y=y-10*dt;
}

float CaidaLibre::getX()
{
    return x;
}

float CaidaLibre::getY()
{
    return y;
}
