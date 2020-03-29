#include "utilidades.h"
#include <iostream>
using namespace std;


// Funcion de tipo void que pide los valores al usuario
// y los guarda en el vector.

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

// Funcion que se ocupa de mostrar los datos del vector

void mostrarDatos(double array[], int tam){
  for(int j = 0; j<tam;j++){
    cout << array[j] << " " ;
  }
  cout << endl;
}

// Funcion que ordena los datos de un vector

void ordenarDatos(double array[], int tam){
  float temporal;
  int aux;
  for(int i=0;i<tam; i++){ // recorre todas las posiciones
    for(int j=0; j<tam-1; j++){ // comparar
        if(array[j] > array[j+1]){
          temporal = array[j]; // guardas en una variable auxiliar el mayor
          array[j] = array[j+1]; // mueves el valor menor de sitio
          array[j+1] = temporal; // guardas el valor en el sitio posterior de la variable auxiliar
        }
      }
    }
}

// Funcion que recorre un vector arrayinicio y guarda en
// otro vector arrayfin los valores que no se repiten

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
