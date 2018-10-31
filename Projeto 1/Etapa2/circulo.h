#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "screen.h"

class Circulo : public FiguraGeometrica
{
private:
    unsigned int x0, y0, r;
    bool pree;
public:
    Circulo(unsigned int _x0=0, unsigned int _y0=0,
            unsigned int _r=0, bool _pree=false);

    void draw(Screen &t);
    void pertenceACincunferencia(unsigned int x1, unsigned int y1, Screen &t);
};

#endif // CIRCULO_H
