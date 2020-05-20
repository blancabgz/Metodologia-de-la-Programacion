#include <iostream>
#include <cmath>
#include "matrizdispersa.h"
#include "valor.h"
using namespace std;

// constructor por defecto
MatrizDispersa::MatrizDispersa(){
  this->nfilas = 0;
  this->ncolumnas = 0;
  this->valores = nullptr;
  this->numeroValores = 0;
}

// constructor por parametro
MatrizDispersa::MatrizDispersa(int nfilas, int ncolumnas, Valor * valores, int numeroValores){
  this->nfilas = nfilas;
  this->ncolumnas = ncolumnas;
  this->valores = valores;
  this->numeroValores = numeroValores;
}

// destructor
MatrizDispersa::~MatrizDispersa(){
  this->nfilas = 0;
  this->ncolumnas = 0;
  this->numeroValores = 0;
  if(valores != nullptr){
    delete[] valores;
    valores = nullptr;
  }
}

// constructor por copia
MatrizDispersa::MatrizDispersa(const MatrizDispersa &objcopia){
  this->nfilas = objcopia.nfilas; // copio n las filas
  this->ncolumnas = objcopia.ncolumnas; // copio las columnas
  this->numeroValores = objcopia.numeroValores; // copio el numero de valores significativos
  for(int i = 0; i < this->numeroValores; i++){
    this->valores[i] = objcopia.valores[i];
  }
}

MatrizDispersa::MatrizDispersa(const int * vectorfilas, const int * vectorcolum, const double * vectorvalores){

  int numerofil = 0, numerocol = 0, numeroval = 0;
  for(int i = 0; vectorfilas[i] != -15; i++){ // obtengo el numero de filas que tiene el vector
    numerofil++;
  }

  for(int i = 0; vectorcolum[i] != -15; i++){ // obtengo el numero de columnas que tiene el vector
    numerocol++;
  }

  for(int i = 0; vectorvalores[i] != -15; i++){ // obtengo el numero de valores que tiene el vector
    numeroval++;
  }

  this->nfilas = numerofil;
  this->ncolumnas = numerocol;
  this->numeroValores = numeroval;
  this->valores = new Valor[numeroval];// creo un vector de valores

  for(int i = 0; i < numeroval; i++){ // copio los valores del vector
    Valor valorsig(vectorfilas[i],vectorcolum[i],vectorvalores[i]);
    this->valores[i] = valorsig;
  }
}

MatrizDispersa MatrizDispersa::operator + (const MatrizDispersa &md){
  int filas, columnas, num_valores;
  filas = this->nfilas + md.nfilas; // obtengo el numero de filas
  columnas = this->ncolumnas + md.ncolumnas; // obtengo el numero de columnas
  num_valores = this->numeroValores + md.numeroValores; //obtengo el numero de valores significativos

  Valor * sumavalor = new Valor[num_valores]; // creo un vector suma con el numero de valores significativos calculados
  for(int i = 0; i < numeroValores; i++){
    sumavalor[i] = this->valores[i];
  }

  for(int j = 0; j < md.numeroValores; j++){
    sumavalor[j + this->numeroValores] = md.valores[j];
  }

  MatrizDispersa matriz(filas,columnas,sumavalor,num_valores);
  return matriz;
}



ostream & operator << (ostream &os, const MatrizDispersa &md){ // operador para sacar la matriz por pantalla
  int fila = 0, columna = 0;
  for(int i = 0; i < md.nfilas; i++){ // miro dentro del vector cual es el valor fila mayor
    if(md.valores[i].getFila() > fila){
      fila = md.valores[i].getFila();
    }
  }

  for(int i = 0; i < md.ncolumnas; i++){ // miro dentro del vector cual es el valor columna mayor
    if(md.valores[i].getColumna() > columna){
      columna = md.valores[i].getColumna();
    }
  }

  double ** matriz  = new double *[fila]; // reservo memoria
  for(int i = 0; i < fila; i++){
    matriz[i] = new double[columna];
  }

  // inicializo la matriz con los datos de fila y columna obtenidos a 0
  for(int i = 0; i < fila; i++){
    for(int j = 0; j < columna; j++){
      matriz[i][j] = 0;
    }
  }

  // recorro el vector de valores e introduzco en la matriz los valores significativos
  for(int v = 0; v < md.numeroValores; v++){
    matriz[md.valores[v].getFila() - 1][md.valores[v].getColumna() - 1] = md.valores[v].getValor();
  }

  // imprimo matriz
  for(int i = 0; i < fila; i++){
    for(int j = 0; j < columna; j++){
      os << matriz[i][j] << " ";
    }
    os << endl;
  }
  os << endl;
  return os;
}
