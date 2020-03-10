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

void combinarSuma(Valor array1[], int tam1 , Valor array2[], int tam2, Valor arrayfin[] ){
  int contador = 0;
  for(int j=0; j<tam1; j++){ // bucle para introducir los valores del vector 1 en el vector final suma
    arrayfin[contador] = array1[j];
    contador++;
  }

  for(int k = 0; k<tam2; k++){
      if(arrayfin[k].getFila() == array2[k].getFila() && arrayfin[k].getColumna() == array2[k].getColumna()){
        arrayfin[k].setValor( arrayfin[k].getValor() + array2[k].getValor());
      }else{
        arrayfin[k].setValor(array2[k].getValor());
      }
  }


}
