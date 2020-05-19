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

MatrizDispersa MatrizDispersa::operator + (const MatrizDispersa &md){
  int filas, columnas, num_valores;
  filas = this->nfilas + md.nfilas;
  columnas = this->ncolumnas + md.ncolumnas;
  num_valores = this->numeroValores + md.numeroValores;

  Valor * sumavalor = new Valor[num_valores];
  for(int i = 0; i < numeroValores; i++){
    sumavalor[i] = this->valores[i];
  }

  for(int j = 0; j < md.numeroValores; j++){
    sumavalor[j + this->numeroValores] = md.valores[j];
  }

  MatrizDispersa matriz(filas,columnas,sumavalor,num_valores);
  return matriz;
}



ostream & operator << (ostream &os, const MatrizDispersa &md){
  int fila = 0, columna = 0;
  for(int i = 0; i < md.nfilas; i++){
    if(md.valores[i].getFila() > fila){
      fila = md.valores[i].getFila();
    }
  }

  for(int i = 0; i < md.ncolumnas; i++){
    if(md.valores[i].getColumna() > columna){
      columna = md.valores[i].getColumna();
    }
  }

  double ** matriz  = new double *[fila];

  for(int i = 0; i < fila; i++){
    matriz[i] = new double[columna];
  }

  for(int i = 0; i < fila; i++){
    for(int j = 0; j < columna; j++){
      matriz[i][j] = 0;
    }
  }


  for(int v = 0; v < md.numeroValores; v++){
    matriz[md.valores[v].getFila() - 1][md.valores[v].getColumna() - 1] = md.valores[v].getValor();
  }

  for(int i = 0; i < fila; i++){
    for(int j = 0; j < columna; j++){
      os << matriz[i][j] << " ";
    }
    os << endl;
  }
  os << endl;
  return os;
}
