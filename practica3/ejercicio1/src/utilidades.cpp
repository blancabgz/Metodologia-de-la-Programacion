#include "utilidades.h"
#include <iostream>
using namespace std;

void introducirValores(double *array, int tam){
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

void apuntarVector(double *vector, double **ptr_vector, int tam){
  for(int i=0; i<tam; i++){
    ptr_vector[i] = &vector[i];
  }
}

void ordenarVectorPunteros(double **ptr_vector, int tam){
  double *temporal;
  for(int i=0; i<tam; i++){
    for(int j=0; j<tam-1; j++){
      if(*ptr_vector[j] > *ptr_vector[j+1]){
        temporal = ptr_vector[j];
        ptr_vector[j] = ptr_vector[j+1];
        ptr_vector[j+1] = temporal;
      }
    }
  }
}

void mostrarDatosVector(double *array, int tam, double **ptr_vector){
  for(int i=0; i<tam; i++){
    cout << array[i] << " ";
  }
  cout << endl;

  for(int j=0; j<tam; j++){
    cout << **(ptr_vector+j)<< " ";
  }
  cout << endl;
}
