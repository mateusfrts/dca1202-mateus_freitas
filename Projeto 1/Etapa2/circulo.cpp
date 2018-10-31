#include "circulo.h"
#include "screen.h"

using namespace std;

Circulo::Circulo(unsigned int _x0, unsigned int _y0, unsigned int _r, bool _pree)
{
    x0 = _x0;
    y0 = _y0;

    r = _r;
    pree = _pree;
}

void Circulo::draw(Screen &t)
{
    if(pree){
        for(unsigned int i=(x0-r);i<=(x0+r);i++){
            for(unsigned int j=(y0-r);j<=(y0+r);j++){
                if( (i-x0)*(i-x0)+(j-y0)*(j-y0) <= (r*r)){
                    t.setPixel(int(i),int(j));
                }
            }
        }
    }
    else{
        unsigned int x1 = 0;
        unsigned int y1 = r;
        int d = 1 - int(r);
        pertenceACincunferencia(x1,y1,t);
        while(y1 > x1){
            if(d < 0){
                d = d + 2*int(x1) + 3;
                x1 = x1 + 1;
            }
            else{
                d = d + 2*int(x1-y1) + 5;
                x1 = x1 + 1;
                y1 = y1 - 1;
            }
            pertenceACincunferencia(x1,y1,t);
        }
    }
}

void Circulo::pertenceACincunferencia(unsigned int x1, unsigned int y1, Screen &t)
{
    t.setPixel(int(x0 + x1), int(y0 + y1));
    t.setPixel(int(x0 + y1), int(y0 + x1));
    t.setPixel(int(x0 - y1), int(y0 + x1));
    t.setPixel(int(x0 - x1), int(y0 + y1));
    t.setPixel(int(x0 - x1), int(y0 - y1));
    t.setPixel(int(x0 - y1), int(y0 - x1));
    t.setPixel(int(x0 + y1), int(y0 - x1));
    t.setPixel(int(x0 + x1), int(y0 - y1));
}
