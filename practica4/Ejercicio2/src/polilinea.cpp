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

// constructor copia

Polilinea::Polilinea(const Polilinea &objcopia){
  this->num = objcopia.num;
  if(this->num > 0){
    this->p = new Punto[this->num];
    for(int i=0; i<this->num; i++){
      this->p[i] = objcopia.p[i];
    }
  }
}

// destructor
Polilinea::~Polilinea(){
  liberarMemoria();
}

// funcion agregar punto
void Polilinea::agregarPunto(Punto punto){
  if(posUtil < this->num){
    this->p[posUtil] = punto;
    posUtil++;
  }else{
    Punto * arrayaux =  new Punto[this->num + 1]; // creo un array auxiliar para redimensionar
    for(int i = 0; i < this->num; i++){
       arrayaux[i] = this->p[i]; // copio los valores
    }

    delete[] p;
    this->p = arrayaux;
    this->p[this->num] = punto;
    this->num = this->num + 1; // aumento valor
    posUtil++;
  }
}


ostream & operator << (ostream &os, const Polilinea &poli){
  os << endl;
  for(int i = 0; i < poli.num; i++){
    os << "Coordenada X = " << poli.p[i].getX() << " Coordenada Y = " << poli.p[i].getY() << endl;
  }
  os << endl;
  return os;
}


// operador suma
Polilinea Polilinea::operator + (const Polilinea &pl){
  int total;
  total = this->num + pl.num;
  Polilinea suma(total);

  for(int i = 0; i < this->num; i++){
    suma.p[i] = this->p[i];
  }

  for(int j = 0; j < pl.num; j++){
    suma.p[j+this->num] = pl.p[j];
  }

  return suma;
}
