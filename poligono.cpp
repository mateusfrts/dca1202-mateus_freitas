#include <iostream>
#include <cmath>
#include "poligono.h"
#include "point.h"

using namespace std;

Poligono::Poligono(unsigned mN)
{
    N = mN;
    if (mN > 0 ){
        vert = new Point(N);
    } else {
        N = 0;
        vert = NULL;
    }
}

Poligono::Poligono(Poligono &pol)
{
    unsigned mN = pol.getN();
    N = mN;
    if (N > 0 ){
        vert = new Point(N);
        for (unsigned i=0; i<N; i++){
            vert[i] = pol.vert[i];
        }
    } else {
        N = 0;
        vert = NULL;
    }
}

Poligono::~Poligono()
{
    delete [] vert;
    N = 0;
    vert = NULL;
}

void Poligono::setNVert(unsigned mN)
{
    for(int i=0; i<N; i++)
    {
        float aux_1, aux_2;
        cin >> aux_1 >> aux_2;

        setVert(aux_1, aux_2, i);
    }
}

void Poligono::addVert()
{
    Poligono _p(N+1);

    if (N+1 > 0 ){
        for(int i=0; i<N; i++)
        {
            _p.vert[i] = vert[i];
        }
        delete[] vert;
        vert = _p.vert;
        N = N+1;

    } else {
        N = 0;
        vert = NULL;
    }
}

void Poligono::setVert(float _x, float _y, int i)
{
    if (i<N){
        vert[i].setXY(_x, _y);
    } else
    {
        cout << "ERRO" << endl;
    }

}

float Poligono::area()
{
    float area = 0;

    for(int i=0; i<N-1; i++)
    {
        area = area + vert[i].getX() * vert[i+1].getY();
        area = area + ((vert[i+1].getX() * vert[i].getY())*(-1));
    }

    area = area + vert[N-1].getX() * vert[0].getY();
    area = area + ((vert[0].getX() * vert[N-1].getY())*(-1));
    area = abs(area/2.0);
    return area;
}

void Poligono::translada(float a, float b)
{
    for(int i =0; i<N; i++)
    {
        vert[i].translada(a, b);
    }
}

void Poligono::rotaciona(float ang, Point _p0)
{
    Point aux;
    float _x;
    for (int i=0 ;i<N; i++)
    {
        aux = vert[i].sub(_p0);

        _x = aux.getX();
        aux.setX(_x*cos(ang) - aux.getY()*sin(ang));
        aux.setY(_x*sin(ang) + aux.getY()*cos(ang));

        aux = aux.add(_p0);

        vert[i].setX(aux.getX());
        vert[i].setY(aux.getY());
    }
}

void Poligono::imprime()
{
    for(int i=0; i<N-1; i++)
    {
        vert[i].imprime();
        cout << " -> ";
        vert[i+1].imprime();
        cout << ", ";
    }
    vert[N-1].imprime();
    cout << " -> ";
    vert[0].imprime();
}
