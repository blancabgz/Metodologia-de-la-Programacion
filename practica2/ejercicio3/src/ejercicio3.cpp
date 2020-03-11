/* EJERCICIO 3
Blanca Abril Gonzalez
*/


#include <iostream>
#include "utilidades.h"
using namespace std;

int main(){
  int tam1;
  cout << "Introduce el numero de elementos que va a introducir: " ;
  cin >> tam1;
  double vector_inicio[tam1];
  introducirValores(vector_inicio,tam1);
  mostrarDatos(vector_inicio,tam1);

}
