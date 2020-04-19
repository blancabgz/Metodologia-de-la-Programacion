#include <iostream>
#include <cmath>
#include "celda.h"
using namespace std;

// constructores
Celda::Celda(){
  sig = 0;
  info = 0;
}

Celda::Celda(double info, Celda * sig){
  this->sig = sig;
  this->info = info;
}

// establecer puntero siguiente
void Celda::setSig(Celda *sig){
  this->sig = sig;
}

// poner valor celda
void Celda::setValor(double info){
  this->info = info;
}

// obtener el puntero siguiente
Celda * Celda::getSig(){
  return sig;
}

// obtener valor de una celda
double Celda::getValor(){
  return info;
}
