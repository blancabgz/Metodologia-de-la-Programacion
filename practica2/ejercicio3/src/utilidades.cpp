#include "utilidades.h"
#include <iostream>
using namespace std;

void introducirValores(double array[], int tam){
  double valor;
  for(int i=0;i<tam;i++){
    if(i < tam-1){
      cout << "Introduce un elemento: " ;
    }else{
      cout << "Introduce el último elemento:" ;
    }
    cin >> valor;
    array[i] =  valor;

  }
}

void mostrarDatos(double array[], int tam){
  for(int j = 0; j<tam;j++){
    cout << array[j] << " " ;
  }
  cout << endl;
}

void ordenarDatos(double array[], int tam){
  float temporal;
  int aux;

  for(int i=0;i<tam; i++){ // recorre todas las posiciones
    for(int j=0; j<tam-1; j++){ // comparar
        if(array[j] > array[j+1]){
          temporal = array[j]; // guardas en una variable auxiliar el mayor
          array[j] = array[j+1];
          array[j+1] = temporal;
        }
      }
    }
}

void eliminarRepetidos(double arrayinicio[], int &tam1, double arrayfin[]){
  int j = 0;
  for(int i=0; i<tam1-1;i++){ // recorro el vector desde el principio hasta 1 menos
    if(arrayinicio[i] != arrayinicio[i+1]){ // si no coinciden
      arrayfin[j] = arrayinicio[i]; // guardas el valor en el array final
      j++;
    }
  }
  arrayfin[j] = arrayinicio[tam1-1]; // guarda el ultimo
  tam1 = j+1;
}
