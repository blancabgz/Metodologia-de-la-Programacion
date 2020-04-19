#include "utilidades.h"
#include <iostream>
using namespace std;

// funcion para introducir valores e insertarlos en el objeto lista
void pedirValores(int num, Lista *lista){
  int valor;
  for(int i = 0; i < num; i++){
    cout << "Introduce el valor: " ;
    cin >> valor;
    lista->agregarFinal(valor);
  }
}
