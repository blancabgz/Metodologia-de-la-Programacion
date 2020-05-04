#include <iostream>
#include <cmath>
#include "punto.h"
using namespace std;

// constructor por defecto
Punto::Punto(){
  this->x = 0;
  this->y = 0;
}

// constructor por parametro
Punto::Punto(int x, int y){
    x = 0;
    y = 0;
}

// actualizar coordenada x
void Punto::setX(int x){
  this->x = x;
}

// actualizar coordenada y
void Punto::setY(int y){
  this->y = y;
}

// devolver coordenada x
int Punto::getX(){
  return this->x;
}

//devolver coordenada y
int Punto::getY(){
  return this->y;
}
