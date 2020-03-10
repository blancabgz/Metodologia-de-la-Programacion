/**
BLANCA ABRIL GONZÁLEZ GRUPO E3
Ejercicio 2
**/

#include <iostream>
#include <cmath>
#include "valor.h"
#include "utilidades.h"
using namespace std;

int main(){
    int tam1,tam2,fila,columna;
    double valor;

    cout << "Nueva coleccion" << endl;
    cout << "¿Cuantos elementos vas a introducir? ";
    cin >> tam1;
    Valor array1[tam1];
    pedirValores(array1,tam1);

    cout << "Nueva coleccion" << endl;
    cout << "¿Cuantos elementos vas a introducir? ";
    cin >> tam2;
    Valor array2[tam2];
    pedirValores(array2,tam2);

    cout << "--------------- CASO PRUEBA ---------------" << endl;
    for(int j=0;j<tam1;j++){
      array1[j].mostrar();
      if(j<tam1-1){
        cout << " -- ";
      }
    }
    cout << endl;
    for(int k=0;k<tam2;k++){
      array2[k].mostrar();
      if(k<tam2-1){
        cout << " -- ";
      }
    }
    cout << endl;
    cout << "---------------------------------------------" << endl;
    Valor arraysuma[tam1+tam2];
    combinarSuma(array1,tam1,array2,tam2,arraysuma);
    for(int k=0;k<tam1;k++){
      arraysuma[k].mostrar();
    }
    cout << endl;
}
