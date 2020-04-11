#include "utilidades.h"
#include <iostream>
using namespace std;

void pedirValores(Matriz *matriz, int filas, int columnas){
  int valor;
  for(int i=0; i<filas; i++){
    for(int j=0; j<columnas; j++){
      cout << "Introduce un valor: ";
      cin >> valor;
      matriz->introducirValores(i,j,valor);
    }
  }
}
