#ifndef BIGINT_H
#define BIGINT_H

#include <iostream>

using namespace std;

class BigInt{
  private:
    int * datos; // puntero a datos
    int tam; // numero de elementos

    inline void reservarMemoria(){ // reservarMemoria segun el numero de elementos
      if(tam != 0){
        this->datos = new int[tam];
        for(int i=0; i<tam; i++){
          datos[i] = 0;
        }
      }
    }

    inline void liberarMemoria(){
      delete[] datos; // libera el puntero a datos
      this->tam = 0;
    }

  public:
    // constructor por defecto
    BigInt();

    // constructor con parametro
    BigInt(int num, char * datosuser);

    BigInt(const BigInt &objacopiar);

    // destructor

    ~BigInt();

    // mostrar los elementos del vector
    void mostrar();

};

#endif
