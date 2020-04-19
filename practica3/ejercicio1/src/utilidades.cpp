#include "utilidades.h"
#include <iostream>
using namespace std;

// Funcion que se ocupa de introducir
// los valores que desee el usuario
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

// copiar las direcciones de memoria de un puntero a otro
void apuntarVector(double *vector, double **ptr_vector, int tam){
  for(int i=0; i<tam; i++){
    ptr_vector[i] = &vector[i];
  }
}

// ordeno vector con ordenacion burbuja
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

// muestro los datos
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
