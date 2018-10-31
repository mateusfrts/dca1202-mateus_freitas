#include "reta.h"
#include <cmath>
#include "screen.h"

using namespace std;

Reta::Reta(unsigned int _xi, unsigned int _yi,
           unsigned int _xf, unsigned int _yf)
{
    xi = _xi;
    yi = _yi;

    xf = _xf;
    yf = _yf;
}

void Reta::draw(Screen &t)
{

    float step, xinc, yinc;
    float x, y;
    int deltax = int(xf-xi);
    int deltay = int(yf-yi);
    if(deltax >= deltay)
    {
        step = deltax;
    }
    else
    {
        step = deltay;
    }
    xinc = deltax/step;
    yinc = deltay/step;
    x=float(xi);
    y=float(yi);

    for(int i=0;i<step;i++)
    {
        t.setPixel(int(x), int(y));
        x = x + xinc;
        y = y + yinc;
    }

}
