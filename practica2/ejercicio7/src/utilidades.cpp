#include "utilidades.h"
#include <iostream>
using namespace std;

void descomponer(int num, int factores[], int &numeroFactores){
  bool salir = false;
    for(int i=2; i<num && !salir; i++){
      if(num%i == 0){
        factores[numeroFactores] = i;
        numeroFactores = numeroFactores + 1;
        salir = true;
        descomponer(num/i,factores,numeroFactores);
      }
    }
  if(!salir){
    factores[numeroFactores] = num;
  }
}

void imprimeVector(int vector[], int numeroFactores){

  for(int j=0; j<numeroFactores+1;j++){
    cout << vector[j] << " ";
  }
  cout << endl;
}
