#include <iostream>
#include <cmath>
#include <cstring>
#include "precuencias.h"
#include "pareja.h"

using namespace std;

int main(){
  int tam, valor;
  bool igualdad = false, desigualdad = true;
  char * num = new char[256];

  Precuencias precuenciadefecto();

  cout << "Introduce un numero: ";
  cin >> num;
  tam = strlen(num);

  // creo una secuencia
  Precuencias precuencia1(num,tam);
  // creo una copia de la primera
  Precuencias precuenciaigual(precuencia1);

  cout << precuencia1;
  cout << endl;
  cout << precuenciaigual;

  cout << endl;

  igualdad = precuencia1 == precuenciaigual;
  if(igualdad){
    cout << "Son iguales" << endl;
  }else{
    cout << "Son diferentes" << endl;
  }
  cout << endl;

  // hacemos copia de la primera
  cout << "Copia: " << endl;
  Precuencias precuencia2(precuencia1);
  cout << precuencia2;

  // introducimos un valor
  cout << "Introduce un valor a insertar: ";
  cin >> valor;

  precuencia1.agregarValor(valor);
  cout << "Añadir " << valor << endl;
  cout << precuencia1;
  cout << endl;
  cout << precuencia2;
  delete [] num;



  desigualdad = precuencia1 != precuencia2;

  if(desigualdad){
    cout << "Son diferentes" << endl;
  }else{
    cout << "Son iguales" << endl;
  }
}
