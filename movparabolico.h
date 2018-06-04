#ifndef MOVPARABOLICO_H
#define MOVPARABOLICO_H

#include <math.h>

class MovParabolico
{
public:
    MovParabolico(float _x, float _y, float _h, float _w);
    float getX();
    float getY();
    float getVx();
    float getVy();             //Metodos get
    float getAx();
    float getAy();
    float getAngulo();
    float getW();
    float getH();

    void setVel(float x, float y);          //metodo para asignar la velocidad (en X y en Y)
    void setPoint(float _x, float _y);

    void calculaPos(float dt);  //metodo que calcula la posicion de la esfera
    void calculaVel(float dt);  //mtodo que calcula las componentes vectoriales de la velocidad
    void calculaAngulo();       //metodo que calcula la direccion del vector velocidad
    void calculaAcc();          //metodo que calcula las componentes vectoriales de la aceleracion
    void actualizar(float dt);
private:
    float h,w;
    float x;
    float y;
    float vx;
    float vy;               //Atributos Fisicos del movimiento de la esfera
    float ax;
    float ay;
    float angulo;
};

#endif // MOVPARABOLICO_H
