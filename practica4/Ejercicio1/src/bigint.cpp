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
  for(int i=0; i<tam; i++){
    datos[i] = (int)(datosuser[(tam-1) - i]) - (int) '0'; // coge el tamaño - 1  y le va restando i, de esa manera se guarda al contrario
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

BigInt BigInt::sumarBigInt(BigInt &objeto2){
  int tamano;
  int acarreo = 0;
  if(this->tam > objeto2.tam){
    tamano = this->tam;
  }else if(this->tam < objeto2.tam){
    tamano = objeto2.tam;
  }else{
    tamano = this->tam;
  }

  BigInt objetosuma(tamano);

  for(int i = 0; i<tamano; i++){
    objetosuma.datos[i] = (this->datos[i] + objeto2.datos[i] + acarreo) % 10 ;
    acarreo = (this->datos[i] + objeto2.datos[i] + acarreo) / 10;
  }

  if(acarreo != 0){
    int * vector_redimension = new int [tamano + 1];

    for(int j = 0; j < tamano; j++){
      vector_redimension[j] = objetosuma.datos[j];
    }

    tamano++;
    vector_redimension[tamano - 1] = acarreo;

    objetosuma.liberarMemoria();
    objetosuma.datos = vector_redimension;
    objetosuma.tam = tamano;
  }

  return objetosuma;
}

void BigInt::mostrar(){
  for(int i=tam - 1 ; i>=0; i--){
    cout << datos[i] << " ";
  }
  cout << endl;
}

BigInt::~BigInt(){
  liberarMemoria();
}
