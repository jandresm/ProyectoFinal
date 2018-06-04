#include "movparabolico.h"

MovParabolico::MovParabolico(float _x, float _y, float _h, float _w):
    x(_x),y(_y),h(_h),w(_w)
{

}
float MovParabolico::getX()
{
    return x;
}

float MovParabolico::getY()
{
    return y;
}

float MovParabolico::getVx()
{
    return vx;
}

float MovParabolico::getVy()
{
    return vy;
}

float MovParabolico::getAx()
{
    return ax;
}

float MovParabolico::getAy()
{
    return ay;
}

float MovParabolico::getAngulo()
{
    return angulo;
}

float MovParabolico::getW()
{
    return w;
}

float MovParabolico::getH()
{
    return h;
}

void MovParabolico::setVel(float x, float y)
{
    vx=x;
    vy=y;
}

void MovParabolico::setPoint(float _x, float _y)
{
    x=_x;
    y=_y;
}



void MovParabolico::calculaPos(float dt)
{
    x = x + vx*dt + (1/2)*ax*pow(dt,2);
    y = y + vy*dt + (1/2)*ay*pow(dt,2);
}

void MovParabolico::calculaVel(float dt)
{
    vx = vx + ax*dt;
    vy = vy + ay*dt;
}

void MovParabolico::calculaAngulo()
{
    angulo=atan(vy/vx);
}

void MovParabolico::calculaAcc()
{
    ax = 0;
    ay = 10;
}

void MovParabolico::actualizar(float dt)
{
    calculaPos(dt);
    calculaVel(dt);
    calculaAngulo();
    calculaAcc();
}
