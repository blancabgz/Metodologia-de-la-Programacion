#ifndef PRECUENCIAS_H
#define PRECUENCIAS_H

#include <iostream>
#include "pareja.h"

using namespace std;

class Precuencias{
  private:
    Pareja *parejas; // array de objetos de la clase Pareja
    int npares; // numero de objetos almacenados en el array

    inline void liberarMemoria(){
      this->npares = 0;
      delete[] parejas;
      parejas = nullptr;
    }

    inline void inicializar(){
      for(int i = 0; i < 10; i++){ // inicializar a 0
        this->parejas[i].setDato(i);
        this->parejas[i].setNveces(0);
      }
    }

  public:
    friend ostream & operator << (ostream &os, const Precuencias &prec);
    Precuencias(); // constructor por defecto
    Precuencias(const char * numero, const int tam); // constructor por parametro
    ~Precuencias(); // destructor
    Precuencias(const Precuencias &objacopiar); //constructor copia
    // ordena los elementos
    void ordenar();
    // agrega un valor a la secuencia
    void agregarValor(int num);
    // operador ==
    bool operator == (const Precuencias & prec);
    //operador !=
    bool operator != (const Precuencias & prec);
};

#endif
