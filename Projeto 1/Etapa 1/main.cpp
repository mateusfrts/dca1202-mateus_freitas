#include <iostream>
#include <cmath>
#include "poligono.h"
#include "point.h"
#include "retangulo.h"

using namespace std;

int main(void){
    Retangulo R(0, 0, 3 ,4);
    Point p0;

    R.imprimir();
    cout << "R.N = " << R.getN() << endl;
    cout << "area = " << R.area() << endl;
    R.rotaciona(60, p0);

    R.imprimir();
    cout << "R.N = " << R.getN() << endl;
    cout << "area = " << R.area() << endl;

    return 0;
}
