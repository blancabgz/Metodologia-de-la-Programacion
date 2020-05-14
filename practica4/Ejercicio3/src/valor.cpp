#include <iostream>
#include <cmath>
#include "matrizdispersa.h"
using namespace std;

Valor::Valor(){
  this->fila = 0;
  this->columna = 0;
  this->valor = 0;
}

Valor::Valor(int fila, int columna, double valor){
  this->fila = fila;
  this->columna = columna;
  this->valor;
}

void Valor::setFila(int fila){
  this->fila =  fila;
}

void Valor::setColumna(int columna){
  this->columna =  columna;
}

void Valor::setValor(int valor){
  this->valor = valor;
}

int Valor::getFila(){
  return this->fila;
}

int Valor::getColumna(){
  return this->columna;
}

int Valor::getValor(){
  return this->valor;
}
