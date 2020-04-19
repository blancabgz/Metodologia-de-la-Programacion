/**
BLANCA ABRIL GONZÁLEZ GRUPO E3
Ejercicio 1
**/
#include <iostream>
#include "utilidades.h"
using namespace std;

int main(){
  int tam;
  cout << "Indica el numero de elementos que va a introducir: ";
  cin >> tam;
  //Vigila que no introduzca el valor 0
  if(tam == 0){
    cout << "No se puede introducir este valor" << endl;
    return 0;
  }

  double vector[tam];
  introducirValores(vector,tam);
  double *vectorPunteros[tam];
  apuntarVector(vector,vectorPunteros,tam);
  ordenarVectorPunteros(vectorPunteros,tam);
  mostrarDatosVector(vector,tam,vectorPunteros);


}
