#include "retangulo.h"
#include "screen.h"

using namespace std;


Retangulo::Retangulo(unsigned int _x0, unsigned int _y0,
                     unsigned int _larg, unsigned int _alt,
                     bool _pree)
{
    x0 = _x0;
    y0 = _y0;

    larg = _larg;
    alt = _alt;

    pree = _pree;
}

void Retangulo::draw(Screen &t)
{
    if (pree == false){
        for (unsigned int i=y0; i<y0+larg; i++){
            t.setPixel(int(x0),int(i));
            t.setPixel(int(x0+alt-1),int(i));
        }
        for (unsigned int i=x0; i<x0+larg; i++){
            t.setPixel(int(i),int(y0));
            t.setPixel(int(i),int(y0+larg-1));
        }
    }
    else{
        t.setPixel(int(x0),int(y0));

        for (unsigned int i=x0; i<x0+larg; i++){
            for(unsigned int j=y0; j<y0+alt; j++){
                t.setPixel(int(i),int(j));
            }
        }
    }

}
