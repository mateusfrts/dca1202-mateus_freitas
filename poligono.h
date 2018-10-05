#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"
#include "retangulo.h"

/**
 * @brief The Poligono class Classe que representa
 * polígonos convexos com limitação de 100 vértices
 * utilizando a classe Point.h para guardar os vértices.
 */
class Poligono
{
private:
    /**
     * @brief vert Vetor de pontos que representa os
     * Vértices do polígono.
     */
    Point *vert;
    /**
     * @brief N Número de vértices.
     */
    unsigned N;
public:
    /**
     * @brief Poligono Construtor padrão que recebe como
     * parâmetro o número de pontos.
     * @param mN Número de pontos do polígono.0
     */
    Poligono(unsigned mN=0);
    /**
     * @brief Poligono Construtor por cópia com base em um
     * polígono existente.
     * @param pol Plígono existente que será cópia para o
     * polígono que está sendo criado.
     */
    Poligono(Poligono &pol);
    ~Poligono();

    /**
     * @brief setNVert Cria um polígono de mN vértices.
     * @param mN Número de vértices a ser criado.
     */
    void setNVert(unsigned mN);
    /**
     * @brief addVert Adiciona um vétice a um polígono já
     * existente.
     */
    void addVert();
    void setVert(float _x, float _y, int i);
    /**
     * @brief getN Método para recuperar o número atual de vértices
     * de um poígono.
     * @return Retorna o número de vértices.
     */

    unsigned getN(){return N;}
    /**
     * @brief area Método que calcula a área de um polígono de N vértices.
     * @return Retorna a área do Polígono.
     */
    float area();
    /**
     * @brief translada Translada todo o polígono em a e b de forma que o
     * vértice (x, y) -> (x+a, y+b)
     * @param a Parâmetro que será somado ao 'x' do ponto.
     * @param b Parâmetro que será somado ao 'y' do ponto.
     */
    void translada(float a, float b);
    /**
     * @brief rotaciona Rotacionar o polígono de θ graus no sentido
     * anti-horário em torno de um ponto (x0,y0) fornecido pelo usuário.
     * @param ang Angulo de rotação.
     * @param _p0 Ponto no qual a rotação ocorre em torno.
     */
    void rotaciona(float ang, Point _p0);
    /**
     * @brief imprime Imprimir o polígono armazenado da forma (x0,y0)→(x1,y1)→(x2,y2)→…​
     */
    void imprime();
    friend class Retangulo;
};

#endif // POLIGONO_H
