#include "retangulo.h"
#include "poligono.h"

Retangulo::Retangulo(float mx, float my, float _largura, float _altura)
{
    setN(4);
    vert = new float[4];

    x0 = mx;
    y0 = my;
    largura = _largura;
    altura = _altura;

    Poligono::setVertice(x0, y0,0);
    Poligono::setVertice(x0, y0-altura,1);
    Poligono::setVertice(x0+largura,y0-altura,2);
    Poligono::setVertice(x0+largura,y0,3);
}
