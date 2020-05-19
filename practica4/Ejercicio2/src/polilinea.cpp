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

// constructor copiar

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

void Polilinea::agregarPunto(Punto punto){
  if(posUtil < this->num){
    this->p[posUtil] = punto;
    posUtil++;
  }else{
    Punto * arrayaux =  new Punto[this->num + 1];
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

void Polilinea::mostrar(){
  for(int i = 0; i < this->num; i++){
    cout << "Coordenada X = " << this->p[i].getX() << " Coordenada Y = " << this->p[i].getY() << endl;
  }
}

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
