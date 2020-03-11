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
