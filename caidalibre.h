#ifndef CAIDALIBRE_H
#define CAIDALIBRE_H


class CaidaLibre
{
public:
    CaidaLibre(float _x,float _y);
    void actualizar(float dt);
    float getX();
    float getY();

private:
    float x;
    float y;

};

#endif // CAIDALIBRE_H
