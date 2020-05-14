#include <iostream>
#include <cmath>
#include "matrizdispersa.h"
#include "valor.h"
using namespace std;

MatrizDispersa::MatrizDispersa(){
  this->nfilas = 0;
  this->ncolumnas = 0;
  this->valores = 0;
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
  delete[] valores;
  valores = NULL;
}

MatrizDispersa::MatrizDispersa(const MatrizDispersa &objcopia){
  this->nfilas = objcopia.nfilas;
  this->ncolumnas = objcopia.ncolumnas;
  this->numeroValores = objcopia.numeroValores;
  for(int i = 0; i < this->numeroValores; i++){
    this->valores[i] = objcopia.valores[i];
  }
}

MatrizDispersa::MatrizDispersa(int * vectorfilas, int * vectorcolum, double * vectorvalores){
  int numerofil, numerocol, numeroval;
  for(int i = 0; vectorfilas[i] < 0; i++){
    numerofil++;
  }

  for(int j = 0; vectorcolum[j] < 0; j++){
    numerocol++;
  }

  for(int k = 0; vectorvalores[k] < 0; k++){
    numeroval++;
  }

  this->nfilas = numerofil;
  this->ncolumnas = numerocol;
  this->numeroValores = numeroval;


}
