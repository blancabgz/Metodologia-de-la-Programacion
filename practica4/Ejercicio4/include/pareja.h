#ifndef PAREJA_H
#define PAREJA_H

#include <iostream>


using namespace std;

class Pareja{
  private:
    int dato; // valor
    int nveces; // repeticiones

    inline void liberarMemoria(){
      this->dato = 0;
      this->nveces = 0;
    }

  public:
    Pareja(); // constructor por defecto
    Pareja(int dato, int nveces); // constructor por parametro
    ~Pareja(); // destructor
    Pareja & operator = (const Pareja & pareja); // operador =
    bool operator == (const Pareja & pareja); // operador !=
    bool operator != (const Pareja & pareja); // operador ==
    int getDato() const;
    int getNveces() const;
    void setDato(int dato);
    void setNveces(int nveces);
};

#endif
