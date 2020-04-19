#include <iostream>
#include <cmath>
#include "celda.h"
using namespace std;

void Celda::setSig(Celda *sig){
  this->sig = sig;
}

void Celda::setValor(double info){
  this->info = info;
}

Celda * Celda::getSig(){
  return sig;
}

double Celda::getValor(){
  return info;
}
