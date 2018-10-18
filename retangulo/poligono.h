#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"


class Poligono
{
private:
    /**
     * @brief p Vetor de pontos que forma o polígono.
     */
    Point *p;
    /**
     * @brief N Número de vértices de um polígono.
     */
    unsigned N;
public:
    Poligono(void);
    ~Poligono(void);

    unsigned getN(void){return N;}
    void setVertice(float _x, float _y);
    Point getVertice(unsigned i);
    void translada(float a, float b);
    float area(void);
    void rotaciona(float ang, Point p0);
    void imprimir(void);
};

#endif // POLIGONO_H
