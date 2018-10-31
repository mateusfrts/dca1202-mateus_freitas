#include <iostream>
#include "screen.h"

using namespace std;

Screen::Screen(unsigned int _nlin, unsigned int _ncol)
{
    nlin = _nlin;
    ncol = _ncol;
    mat = vector<vector<char>>(nlin, vector<char>(ncol));
    clear();
}

void Screen::setPixel(int x, int y)
{
    mat[unsigned(x)][unsigned(y)] = brush;
}

void Screen::clear()
{
    for(unsigned int i=0; i<mat.size(); i++){
        for(unsigned int j=0; j<mat[i].size();j++){
            mat[i][j] = ' ';
        }
    }
}

void Screen::setBrush(char _brush)
{
    brush = _brush;
}

ostream& operator<<(ostream &os, Screen &t)
{
    os << "@";
    for (unsigned int i=0; i<2*t.ncol; i++){
        if(i%2 == 0){
            os << "|";
        } else{
            os << "-";
        }
    }

    os << "@" << endl;

    for (unsigned int i=0; i<t.mat.size(); i++){
        os << "|";
        for(unsigned int j=0; j<t.mat[i].size(); j++){
            if (j != 0){
                os << " ";
            }
            os << t.mat[i][j];
        }
        os << " |" << endl;
    }

    os << "@";
    for (unsigned int i=0; i<2*t.ncol; i++){
        if(i%2 == 0){
            os << "|";
        } else{
            os << "-";
        }
    }

    os << "@" << endl;
    return os;
}
