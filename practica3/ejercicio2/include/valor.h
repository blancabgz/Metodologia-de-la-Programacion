
#ifndef VALOR_H
#define VALOR_H

#include <iostream>

using namespace std;

class Valor{
  private:
    int fila;
    int columna;
    double valor;

  public:
    /**
     * Constructor por defecto
     */
    Valor(){
      fila = 0;
      columna = 0;
      valor = 0;
    }

    /**
     * Constructor de la clase
     * @param fila
     * @param columna
     * @param valor
     */
    Valor(int fila, int columna, double valor){
      this->fila = fila;
      this->columna = columna;
      this->valor  = valor;
    }

    // métodos para obtener valores

    int getFila() const {
        return fila;
    }

    int getColumna() const {
      return columna;
    }

    double getValor() const {
      return valor;
    }



    // métodos para asignar valor a filar, columna y valor

    void setFila(int vFila){
      fila = vFila;
    }

    void setColumna(int vColumna){
      columna = vColumna;
    }

    void setValor(double vValor){
      valor = vValor;
    }

    /**
     * Metodo para mostrar el contenido de un objeto
     */
    void mostrar() const;
};
#endif //VALOR_H
