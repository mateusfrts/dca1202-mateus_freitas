#ifndef POINT_H
#define POINT_H

/**
 * @brief The Point class
 */
class Point
{
private:
    /**
     * @brief x Coordenada 'x' do ponto em cordenadas cartesianas
     * @brief y Coordenada 'y' do ponto em cordenadas cartesianas
     */
    float x;
    float y;
public:
    Point(float mx=0, float my=0);
    Point(Point &p1);
    ~Point();

    /**
     * @brief setX Define o valor da variável 'x' do ponto.
     * @param mx Parâmetro que contem o valor de 'x' do ponto.
     */
    void setX(float mx){x = mx;}
    /**
     * @brief setY Define o valor da variável 'y' do ponto.
     * @param my Parâmetro que contem o valor de 'y' do ponto.
     */
    void setY(float my){y = my;}
    /**
     * @brief setXY Define, em uma mesma função, os valores da
     * coordenadas 'x' e 'y' do ponto.
     * @param mx Parâmetro que contem o valor de 'x' do ponto.
     * @param my Parâmetro que contem o valor de 'y' do ponto.
     */
    void setXY(float mx, float my){x = mx; y = my;}

    /**
     * @brief getX Recupera o valor da coordenada 'x' do ponto.
     * @return Retorna o valor de 'x' do ponto.
     */
    float getX(){return x;}
    /**
     * @brief getY Recupera o valor da coordenada 'y' do ponto.
     * @return Retorna o valor de 'y' do ponto.
     */
    float getY(){return y;}

    /**
     * @brief add Adiciona as coordenadas (x,y) do ponto com as
     * coordenadas de um ponto P1(x1,y1) fornecido, armazenando
     * o resultado (x+x1,y+y1) nas coordenadas de um novo ponto,
     * que deverá ser retornado para o cliente da classe.
     * @param Ponto de coordenadas (x1,y1) fornecido que somará
     * no ponto de coordenadas (x,y).
     * @return Retorna um ponto de coordenadas (x+x1,y+y1).
     */
    Point add(Point p1);
    /**
     * @brief sub Subtrai as coordenadas (x,y) do ponto com as
     * coordenadas de um ponto P1(x1,y1) fornecido, armazenando
     * o resultado (x−x1,y−y1) nas coordenadas de um novo ponto,
     * que deverá ser retornado para o cliente da classe.
     * @param p1 Ponto de coordenadas (x1,y1) fornecido que subtrai
     * no ponto de coordenadas (x,y).
     * @return Retorna um ponto de coordenadas (x-x1,y-y1).
     */
    Point sub(Point p1);

    /**
     * @brief norma Calcula a distância do ponto para a origem do
     * sistema de coordenadas.
     * @return Retorna a distânica do ponto a origem do sistema de coordenadas.
     */
    float norma();

    /**
     * @brief translada Translada o ponto (x,y) de (+a,+b), de modo que,
     * após a execução do método, as coordenadas do ponto serão (x+a,y+b).
     * @param a Parâmetro que será somado ao 'x' do ponto.
     * @param b Parâmetro que será somado ao 'y' do ponto.
     */
    void translada(float a, float b);
    /**
     * @brief imprime Imprime o ponto no modelo (x, y)
     */
    void imprime();
};

#endif // POINT_H
