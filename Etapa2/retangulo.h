#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "screen.h"

class Retangulo : public FiguraGeometrica
{
private:
    unsigned int x0, y0, larg, alt;
    bool pree;
public:
    Retangulo(unsigned int _x0=0, unsigned int _y0=0,
              unsigned int _larg=0, unsigned int _alt=0,
              bool _pree=0);

    void draw(Screen &t);
};

#endif // RETANGULO_H
