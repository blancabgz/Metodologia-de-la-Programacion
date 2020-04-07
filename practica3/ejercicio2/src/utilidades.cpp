#include "utilidades.h"
#include <iostream>
using namespace std;

// Funcion que se encarga de pedir el valor que se va a encontrar
// en una fila y una columna tambien introducidos por el usuario y
// crea un objeto Valor con esta informacion.

void pedirValores(Valor *vector, int tam){
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

// Funcion que se encarga se recorrer los dos vectores, y si coinciden la fila y la columna
// suman los valores y se introducen en el nuevo vector.

void combinarSuma(Valor *array1, int tam1 , Valor *array2, int tam2, Valor *arrayfin, int *contador){
  bool repetido = true;
  for(int j=0; j<tam1; j++){ // bucle para introducir los valores del vector 1 en el vector final suma
    arrayfin[j] = array1[j];
    (*contador)++;
  }

  for(int k = 0; k<tam2; k++){
    repetido = false;
    for(int l=0; l<*contador; l++){
      // si coinciden la fila y la columna
      if(arrayfin[l].getFila() == array2[k].getFila() && arrayfin[l].getColumna() == array2[k].getColumna()){
        arrayfin[l].setValor( arrayfin[l].getValor() + array2[k].getValor()); // sumas los valores
        repetido = true;
      }
    }
    if(!repetido){ // si la columna y la fila no son coincidentes, copia el objeto en la posición contador
      arrayfin[*(contador)] = array2[k];
      (*contador)++;
    }
  }
}
