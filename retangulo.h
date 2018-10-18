#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

class Retangulo : public Poligono
{
private:
    float altura;
    float largura;
public:
    Retangulo(float x=0, float y=0, float _altura=0, float _largura=0);
};

#endif // RETANGULO_H
