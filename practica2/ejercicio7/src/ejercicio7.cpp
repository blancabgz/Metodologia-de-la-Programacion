/*
BLANCA ABRIL GONZÁLEZ GRUPO E3
Ejercicio 7:

Construid una función recursiva que calcule la descomposición factorial de un número
entero y la devuelva en un array tipo C. La declaración de la función es la siguiente:

void descomponer ( int numero , int factores[] , int &numeroFactores )

Podéis usar las funciones auxiliares que consideréis pertinentes y organizar el código
libremente

*/

#include <iostream>
#include "utilidades.h"
using namespace std;

int main(){
  int numero,numeroFactores=0;
  const int NUM = 100;
  int factor[NUM];
  // Ingresamos el número del cual hacemos la descomposición
  cout << "Ingresa un numero: ";
  cin >> numero;
  if(numero == 1){
    cout << "Descomposicion del número primo: " << numero << endl;
    cout << "El numero de factores es: " << 0 << endl;
    return 1;
  }else if(numero == 0){
    cout << "Descomposicion del número: " << numero << endl;
    cout << "El numero de factores es: " << 0 << endl;
    return 1;
  }
  //Ver si es primo o no
  bool primo = esPrimo(numero);
  // Llamamos a la funcion descomponer
  descomponer(numero,factor,numeroFactores);
  int vectorFinal[numeroFactores+1];
  for(int i=0; i<numeroFactores+1; i++){
    vectorFinal[i] = factor[i];
  }
  if(primo){
    cout << "Descomposicion del número primo: " << numero << endl;
    cout << "El numero de factores es: " << numeroFactores +1 << endl;
    imprimeVector(vectorFinal,numeroFactores);
  }else{
    cout << "Descomposicion del número no primo: " << numero << endl;
    cout << "El numero de factores es: " << numeroFactores +1 << endl;
    imprimeVector(vectorFinal,numeroFactores);
  }


}
