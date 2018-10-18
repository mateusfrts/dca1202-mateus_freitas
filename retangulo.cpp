#include "retangulo.h"
#include "poligono.h"

Retangulo::Retangulo(float x, float y, float _altura, float _largura)
{
    altura = _altura;
    largura = _largura;

    setVertice(x,         y);
    setVertice(x+largura, y);
    setVertice(x+largura, y+altura);
    setVertice(x,         y+altura);
}
