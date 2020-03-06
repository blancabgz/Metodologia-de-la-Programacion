#include "../include/utilidades.h"
#include <iostream>
using namespace std;

void introducirValores(double array[], int tam){
  int valor;
  for(int i=0; i<tam; i++){
    cout << "Intruduce un valor: ";
    cin >> valor;
    array[i] = valor;
  }
}


void ordenar(double array[], int tam){
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

void mezcla(double array1[],int tam1,double array2[], int tam2, double arrayMezcla[]){
  int fin_vector;
  for(int i=0; i<tam1; i++){
    arrayMezcla[i] = array1[i];
  }
  fin_vector = tam1;
  for(int j=0; j<tam2; j++, fin_vector++){
     arrayMezcla[fin_vector] = array2[j];
  }
}
