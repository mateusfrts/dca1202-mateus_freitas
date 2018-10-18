#include <iostream>
#include <cmath>
#include <stdlib.h>
#include "point.h"
#include "poligono.h"

using namespace std;

Poligono::Poligono()
{
    N = 0;
    p = new Point[100];
    cout << "Construtor padrão pol" << endl;
}

Poligono::~Poligono()
{
    N = 0;
    delete [] p;
    cout << "Destrutor Pol" << endl;
}

void Poligono::setVertice(float _x, float _y)
{
    if (N+1 > 100)
    {
        cout << "Número máximo de vertices" << endl;
    } else {
        N++;
        p[N-1].setXY(_x, _y);
    }
}

Point Poligono::getVertice(unsigned i)
{
    if (i<100){
        return p[i];
    } else {
        cout << "Endereço inválido" << endl;
        return 0;
    }
}

void Poligono::translada(float a, float b)
{
    for(unsigned i=0; i<N; i++)
    {
        p[i].translada(a, b);
    }
}

float Poligono::area()
{
    float area = 0;

   for(unsigned i=0; i<N-1; i++)
   {
       area = area + p[i].getX()*p[i+1].getY();
       area = area - p[i+1].getX()*p[i].getY();
   }

   area = area + p[N-1].getX()*p[0].getY();
   area = area - p[0].getX()*p[N-1].getY();

   return abs(area/2);
}

void Poligono::rotaciona(float ang, Point p0)
{
    translada(-p0.getX(), -p0.getY());
    Point pl;
    for (unsigned i=0; i<N; i++)
    {

        pl.setX(p[i].getX()*cos(float(M_PI)*ang/180) - p[i].getY()*sin(float(M_PI)*ang/180));
        pl.setY(p[i].getX()*sin(float(M_PI)*ang/180) + p[i].getY()*cos(float(M_PI)*ang/180));
        p[i].setXY(pl.getX(), pl.getY());
    }

    translada(p0.getX(), p0.getY());
}

void Poligono::imprimir()
{
    for(unsigned i=0; i<N-1; i++)
    {
        p[i].imprimir();
        cout << " -> ";
    }
    p[N-1].imprimir();
    cout << endl;
}


