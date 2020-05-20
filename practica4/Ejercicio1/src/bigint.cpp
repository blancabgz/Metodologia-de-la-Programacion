#include <iostream>
#include <cmath>
#include "bigint.h"
#include <stdlib.h>
using namespace std;

// constructor por defecto
BigInt::BigInt(){
  this->tam = 1;
  reservarMemoria();
}

BigInt::BigInt(int num){
  this->tam = num;
  reservarMemoria();
}

BigInt::BigInt(int num, char * datosuser){
  this->tam = num;
  reservarMemoria();
  for(int i = 0; i < tam; i++){
    this->datos[i] = (int)(datosuser[(tam-1) - i]) - (int) '0'; // coge el tamaño - 1  y le va restando i, de esa manera se guarda al contrario
  }
}

BigInt::BigInt(const BigInt &objacopiar){
  this->tam = objacopiar.tam;
  if(this->tam > 0){
    this->datos = new int[tam];
    for(int i=0; i<tam; i++){
      datos[i] = objacopiar.datos[i];
    }
  }

}

BigInt::~BigInt(){
  liberarMemoria();
}

BigInt BigInt::sumarBigInt(BigInt &objeto2){
  int tamano;
  int acarreo = 0;
  // miro cual de los dos objetos tiene mayor tamaño
  if(this->tam > objeto2.tam){
    tamano = this->tam;
  }else if(this->tam < objeto2.tam){
    tamano = objeto2.tam;
  }else{
    tamano = this->tam;
  }

  // creo un objeto BigInt del tamaño calculado anteriormente
  BigInt objetosuma(tamano);

  // sumo teniendo el cuenta el acarreo
  for(int i = 0; i<tamano; i++){
    objetosuma.datos[i] = (this->datos[i] + objeto2.datos[i] + acarreo) % 10 ;
    acarreo = (this->datos[i] + objeto2.datos[i] + acarreo) / 10;
  }

  // si llega al final y hay acarreo, redimensiono el vector a una posicion mas
  if(acarreo != 0){
    int * vector_redimension = new int [tamano + 1];

    for(int j = 0; j < tamano; j++){
      vector_redimension[j] = objetosuma.datos[j]; // copio valores
    }

    tamano++;
    vector_redimension[tamano - 1] = acarreo;

    objetosuma.liberarMemoria();
    objetosuma.datos = vector_redimension;
    objetosuma.tam = tamano;
  }

  return objetosuma;
}


ostream & operator << (ostream &os, const BigInt &bi){
  os << endl;
  for(int i = bi.tam - 1; i >= 0; i--){
    os << bi.datos[i] << " ";
  }
  os << endl;
  return os;
}
