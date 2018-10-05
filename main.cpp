#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
    Retangulo R(0,0,3,4);
    R.imprime();
    cout << endl;
    cout << R.area() << endl;
    R.translada(-3,4);
    R.imprime();
    cout << endl;
    cout << R.area() << endl;

    return 0;
}

/* ROTAÇÃO DE UM PONTO EM TORNO DA ORIGEM
 * P'(x',y') é o novo ponto
 * P(x,y) é o antigo ponto
 * theta é o angulo entre os dois pontos
 *
 * x' = x*cos(theta) - y*sin(theta)
 * y' = x*sin(theta) + y*cos(theta)
 *
 * PARA ROTACIONAR EM TORNO DO CENTRO DE MASSA
 * Vai pra um sistema novo tal que a origem é o centro
 * de massa do sistema (x0,y0)
 *
 * Transladar todos os pontos em -(x0,y0)
 *  x'1 = x1 - x0
 *  y'1 = y1 - y0
 *
 * Rotacionar em torno de (x0,y0)
 * translada todos os pontos em +(x0,y0)
 *  x'1 = x1 + x0
 *  y'1 = y1 + y0
 */
