#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "screen.h"

class FiguraGeometrica
{
public:
    FiguraGeometrica(void);
    virtual ~FiguraGeometrica(void);

    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
