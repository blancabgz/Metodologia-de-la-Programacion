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

BigInt::BigInt(int num, char * datosuser){
  this->tam = num;
  reservarMemoria();
  for(int i=0; i<tam; i++){
    datos[i] = (int)(datosuser[(tam-1) - i]) - (int) '0'; // coge el tamaño - 1  y le va restando i, de esa manera se guarda al contrario
  }
}

BigInt::BigInt(const BigInt &objacopiar){
  

}

void BigInt::mostrar(){
  for(int i=0; i<tam; i++){
    cout << datos[i] << " ";
  }
  cout << endl;
}

BigInt::~BigInt(){
  liberarMemoria();
}
