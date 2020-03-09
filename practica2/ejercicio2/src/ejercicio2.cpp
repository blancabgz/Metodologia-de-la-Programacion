/**
BLANCA ABRIL GONZÁLEZ GRUPO E3
Ejercicio 2
**/

#include <iostream>
#include <cmath>
#include "valor.h"
using namespace std;

void combinarSuma(Vector vector1, Vector vector2){

}

int main(){
    int tam,fila,columna;
    double valor;
    cout << "¿Cuantos elementos vas a introducir?";
    cin >> tam;
    Valor array1[tam];
    for(int i=0;i<tam;i++){
      // Introducir los datos
      cout << "Introduce la fila: ";
      cin >> fila;
      cout << "Introducir la columna: ";
      cin >> columna;
      cout << "Introducir el valor: ";
      cin >> valor;
      // Crear un objeto
      /*Valor objeto = Valor(fila,columna,valor);
      array1[i] = objeto;*/
    }
    cout << "--------------- CASO PRUEBA 1 ---------------" << endl;
    for(int j=0;j<tam;j++){
      array1[j].mostrar();
      if(j<tam-1){
        cout << " -- ";
      }
    }
    cout << endl;
    cout << "---------------------------------------------" << endl;

}
