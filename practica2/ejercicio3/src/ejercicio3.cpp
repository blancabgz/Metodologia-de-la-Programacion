/* EJERCICIO 3
Blanca Abril Gonzalez
*/


#include <iostream>
#include "utilidades.h"
using namespace std;

int main(){
  int tam1;
  int *ptr = NULL;
  cout << "Introduce el numero de elementos que va a introducir: " ;
  cin >> tam1;
  double vector_inicio[tam1];
  double vector_final[tam1];
  introducirValores(vector_inicio,tam1);
  mostrarDatos(vector_inicio,tam1);
  ordenarDatos(vector_inicio,tam1);
  ptr = &tam1;
  eliminarRepetidos(vector_inicio,&tam1,vector_final);
  mostrarDatos(vector_final,tam1);
}
