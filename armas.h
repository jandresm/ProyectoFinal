#ifndef ARMAS_H
#define ARMAS_H

#include <QObject>
#include <QPixmap>
#include <QGraphicsRectItem>
#include "movparabolico.h"
#include "caidalibre.h"

class Armas : public QGraphicsRectItem
{
public:
    Armas();
    void actualizar(float dt);

private:
    MovParabolico *movimiento;
    CaidaLibre *mov;

};

#endif // ARMAS_H
