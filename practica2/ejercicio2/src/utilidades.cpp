#include "utilidades.h"
#include <iostream>
using namespace std;

void pedirValores(Valor vector[], int tam){
  int fila, columna;
  double valor;

  for(int i=0;i<tam;i++){
    // Introducir los datos
    cout << "Introduce la fila: ";
    cin >> fila;
    cout << "Introducir la columna: ";
    cin >> columna;
    cout << "Introducir el valor: ";
    cin >> valor;
    // Crear un objeto
    Valor objeto = Valor(fila,columna,valor);
    vector[i] = objeto;
  }
}

void combinarSuma(Valor array1[], int tam1 , Valor array2[], int tam2, Valor arrayfin[], int &contador){
  bool repetido = true;
  for(int j=0; j<tam1; j++){ // bucle para introducir los valores del vector 1 en el vector final suma
    arrayfin[j] = array1[j];
    contador++;
  }

  for(int k = 0; k<tam2; k++){
    repetido = false;
    for(int l=0; l<contador; l++){
      if(arrayfin[l].getFila() == array2[k].getFila() && arrayfin[l].getColumna() == array2[k].getColumna()){
        arrayfin[l].setValor( arrayfin[l].getValor() + array2[k].getValor());
        repetido = true;
      }
    }

      if(!repetido){
        arrayfin[contador] = array2[k];
        contador++;
      }
    }
}
