#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "screen.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main(void)
{
    Screen t(25, 50);
    t.setBrush('m');

    Retangulo o1(7,7,5,3,true);
    o1.draw(t);
    cout << t;

    Retangulo o2(7,2,5,3,true);
    o2.draw(t);
    cout << t;

    Reta r(3,2,20,30);
    r.draw(t);
    cout << t;

    Circulo c(10,10,10,0);
    c.draw(t);
    cout << t;

    Reta r1(15,2,13,13);
    r1.draw(t);
    cout << t;


    return 0;
}
