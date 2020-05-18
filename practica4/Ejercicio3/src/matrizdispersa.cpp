#include <iostream>
#include <cmath>
#include "matrizdispersa.h"
#include "valor.h"
using namespace std;

MatrizDispersa::MatrizDispersa(){
  this->nfilas = 0;
  this->ncolumnas = 0;
  this->valores = nullptr;
  this->numeroValores = 0;
}

MatrizDispersa::MatrizDispersa(int nfilas, int ncolumnas, Valor * valores, int numeroValores){
  this->nfilas = nfilas;
  this->ncolumnas = ncolumnas;
  this->valores = valores;
  this->numeroValores = numeroValores;
}

MatrizDispersa::~MatrizDispersa(){
  this->nfilas = 0;
  this->ncolumnas = 0;
  this->numeroValores = 0;
  if(valores != nullptr){
    delete[] valores;
    valores = nullptr;
  }
}

MatrizDispersa::MatrizDispersa(const MatrizDispersa &objcopia){
  this->nfilas = objcopia.nfilas;
  this->ncolumnas = objcopia.ncolumnas;
  this->numeroValores = objcopia.numeroValores;
  for(int i = 0; i < this->numeroValores; i++){
    this->valores[i] = objcopia.valores[i];
  }
}

MatrizDispersa::MatrizDispersa(const int * vectorfilas, const int * vectorcolum, const double * vectorvalores){

  int numerofil = 0, numerocol = 0, numeroval = 0;
  for(int i = 0; vectorfilas[i] != -15; i++){
    numerofil++;
  }

  for(int i = 0; vectorcolum[i] != -15; i++){
    numerocol++;
  }

  for(int i = 0; vectorvalores[i] != -15; i++){
    numeroval++;
  }

  this->nfilas = numerofil;
  this->ncolumnas = numerocol;
  this->numeroValores = numeroval;
  this->valores = new Valor[numeroval];

  for(int i = 0; i < numeroval; i++){
    Valor valorsig(vectorfilas[i],vectorcolum[i],vectorvalores[i]);
    this->valores[i] = valorsig;
  }
}
