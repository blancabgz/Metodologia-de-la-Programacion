/*
BLANCA ABRIL GONZÁLEZ GRUPO E3
Ejercicio 3:

Haga un programa que obtenga la mayor secuencia monótona creciente de un array
de enteros, guardándola en otro array (mediante una función). Se recomienda hacer uso
del paso por referencia.

*/


#include <iostream>
#include "utilidades.h"
using namespace std;

int main(){
  int tam1;
  cout << "Introduce el numero de elementos que va a introducir: " ;
  cin >> tam1;
  // vigila que no se introduce el 0
  if(tam1 == 0){
    cout << "No se puede introducir este valor" << endl;
    return 0;
  }
  // creamos los vectores con al tamaño introducido
  double vector_inicio[tam1];
  double vector_final[tam1];
  // introducimos los elementos
  introducirValores(vector_inicio,tam1);
  // mostramos los datos
  mostrarDatos(vector_inicio,tam1);
  // ordeanmos los valores
  ordenarDatos(vector_inicio,tam1);
  // quitamos los repetidos y los introducimos en otro vector
  eliminarRepetidos(vector_inicio,tam1,vector_final);
  mostrarDatos(vector_final,tam1);
}
