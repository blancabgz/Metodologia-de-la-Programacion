#include "utilidades.h"
#include <iostream>
using namespace std;

// Funcion que se ocupa de guardar en el vector la
//descomposición del numero introducido

bool esPrimo(int numero){
  for(int i=1;i<numero/2;i++){ // a partir de la mitad del numero no hay mas dividores para eso numero
        if(numero%i==0)
            return false;
  }
 return true;
}


void descomponer(int num, int factores[], int &numeroFactores){
  bool salir = false;
    for(int i=2; i<num && !salir; i++){
      if(num%i == 0){ // si es divisible
        factores[numeroFactores] = i; // guardas en el vector el divisor
        numeroFactores = numeroFactores + 1;
        salir = true;
        descomponer(num/i,factores,numeroFactores); // llamamos de nuevo a la funcion con el valor divido
      }
    }
  if(!salir){
    factores[numeroFactores] = num;
  }
}

// Funcion que se encarga de imprimir los divisores por pantalla
void imprimeVector(int vector[], int numeroFactores){

  for(int j=0; j<numeroFactores+1;j++){
    cout << vector[j] << " ";
  }
  cout << endl;
}
