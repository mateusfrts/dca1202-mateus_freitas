#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

class Retangulo : public Poligono{
private:
    //Paranmetros
    float altura, largura;
    //primeiro ponto do retangulo
    float x0, y0;

public:
    Retangulo(float mx=0, float my=0, float _largura=0, float _altura=0);

};

#endif // RETANGULO_H
