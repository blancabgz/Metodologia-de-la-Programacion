#ifndef POLILINEA_H
#define POLILINEA_H

#include <iostream>
#include "punto.h"

using namespace std;

class Polilinea{
  private:
    Punto *p; // array de puntos
    int num; // numero de puntos
    int posUtil; //ultima posicion ocupada

    inline void reservarMemoria(){
      if(num != 0){
        for(int i = 0; i < num; i++){
          p[i] = Punto(0,0);
        }
      }
    }

    inline void liberarMemoria(){
      delete[] p;
      p = NULL;
      this->num = 0;
    }

  public:
    Polilinea(); // constructor por defecto
    Polilinea(int num); // constructor por parametro
    Polilinea(const Polilinea &objcopia); // constructor copia
    ~Polilinea(); // destructor
    void agregarPunto(Punto punto);
    void mostrar();
};

#endif
