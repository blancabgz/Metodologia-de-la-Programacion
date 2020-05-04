#include <iostream>
#include <cmath>
#include "polilinea.h"
#include "punto.h"
using namespace std;

// constructor por defecto
Polilinea::Polilinea(){
  this->p = 0;
  this->num = 0;
  this->posUtil = 0;
}

// constructor por argumentos
Polilinea::Polilinea(int num){
    this->num = num;
    this->posUtil = 0;
    this->p = new Punto[num];
    reservarMemoria();
}

// destructor
Polilinea::~Polilinea(){
  liberarMemoria();
}

void Polilinea::agregarPunto(Punto punto){
  if(posUtil < this->num){
    this->p[posUtil] = punto;
    posUtil++;
  }else{
    Punto arrayaux[this->num + 1];
    for(int i = 0; i < this->num; i++){
      arrayaux[i] = this->p[i];
    }
    delete[] p;
    this->p = arrayaux;
    this->p[this->num] = punto;
    this->num = this->num + 1;
    posUtil++;
  }

}
