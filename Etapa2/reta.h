#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

class Reta : public FiguraGeometrica
{
private:
    unsigned int xi, yi, xf, yf;
public:
    Reta(unsigned int _xi=0, unsigned int _yi=0,
         unsigned int _xf=0, unsigned int _yf=0);

    void draw(Screen &t);
};

#endif // RETA_H
