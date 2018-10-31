#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <iostream>

using namespace std;

/**
 * @brief The Screen class Classe que serve de suporte
 * para desenhar pontos numa tela virtual implementada
 * em uma matriz alocada dinamicamente de acordo com o
 * usuário.
 */
class Screen{
private:
    unsigned int nlin;
    unsigned int ncol;

    char brush;

    vector< vector<char> > mat;
public:
    Screen(unsigned int _nlin=0, unsigned int _ncol=0);

    void setPixel(int x, int y);

    void clear();

    void setBrush(char _brush);

    char getBrush(){return brush;}
    unsigned int getNCol(){return ncol;}
    unsigned int getNLin(){return nlin;}

    friend ostream &operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
