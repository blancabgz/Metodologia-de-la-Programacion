#include <iostream>
#include <cmath>
#include "precuencias.h"
using namespace std;

// constructor por defecto
Pareja::Pareja(){
  this->dato = 0;
  this->nveces = 0;
}

// constructor por parametro
Pareja::Pareja(int dato, int nveces){
  this->dato = dato;
  this->nveces = nveces;
}

// destructor
Pareja::~Pareja(){
  liberarMemoria();
}

// obtener dato
int Pareja::getDato() const{
  return this->dato;
}

 // obtener las veces que se repite
int Pareja::getNveces() const{
  return this->nveces;
}

// establecer el dato
void Pareja::setDato(int dato){
  this->dato = dato;
}

// establecer las veces que se repite
void Pareja::setNveces(int nveces){
  this->nveces = nveces;
}

// comprueba si dos parejas son iguales
Pareja & Pareja::operator = (const Pareja & pareja){
    this->dato = pareja.dato;
    this->nveces = pareja.nveces;
    return(*this);
}

// comprueba si dos parejas son iguales (true)
bool Pareja::operator == (const Pareja & pareja){
  if(this->dato == pareja.dato){
    if(this->nveces == pareja.nveces){
      return true;
    }else{
      return false;
    }
  }else{
    return false;
  }
}

// comprueba si dos parejas son diferentes(true)
bool Pareja::operator != (const Pareja & pareja){
  if(this->dato == pareja.dato){
    if(this->nveces == pareja.nveces){
      return false;
    }else{
      return true;
    }
  }else{
    return true;
  }
}
