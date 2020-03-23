/* EJERCICIO 7
Blanca Abril Gonzalez
*/

#include <iostream>
#include "utilidades.h"
using namespace std;


int main(){
  int numero,numeroFactores=0;
  const int NUM = 100;
  int factor[NUM];
  cout << "Ingresa un número: ";
  cin >> numero;
  descomponer(numero,factor,numeroFactores);
  int vectorFinal[numeroFactores+1];
  for(int i=0; i<numeroFactores+1; i++){
    vectorFinal[i] = factor[i];
  }
  imprimeVector(vectorFinal,numeroFactores);

}
