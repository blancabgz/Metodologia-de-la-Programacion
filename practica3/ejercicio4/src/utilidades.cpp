#include "utilidades.h"
#include <iostream>
using namespace std;

void pedirValores(int num, Lista *lista){
  int valor;
  for(int i = 0; i < num; i++){
    cout << "Introduce el valor: " ;
    cin >> valor;
    lista->agregarFinal(valor);
  }
}
