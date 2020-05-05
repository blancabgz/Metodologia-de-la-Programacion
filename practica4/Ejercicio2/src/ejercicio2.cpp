#include <iostream>
#include <cmath>
#include "polilinea.h"
#include "punto.h"
#include "utilidades.h"
using namespace std;

int main(){
  int npuntos, puntox, puntoy,npuntos2;
  cout << "Introduce el número de puntos que va a introducir: ";
  cin >> npuntos;

  Polilinea obj1(npuntos);
  obj1.mostrar();

  for(int i = 0; i < npuntos; i++){
    cout << "Introduce punto X: ";
    cin >> puntox;
    cout << "Introduce punto Y: ";
    cin >> puntoy;
    Punto punt(puntox, puntoy);
    obj1.agregarPunto(punt);
  }

  cout << "Introduce el número de puntos que va a introducir: ";
  cin >> npuntos2;
  Polilinea obj2(npuntos);

  for(int i = 0; i < npuntos2; i++){
    cout << "Introduce punto X: ";
    cin >> puntox;
    cout << "Introduce punto Y: ";
    cin >> puntoy;
    Punto punt(puntox, puntoy);
    obj2.agregarPunto(punt);
  }

  Polilinea objetocopiado(obj2);
  objetocopiado.mostrar();

  cout << endl;
  cout << "Introducir punto extra" << endl;
  cout << "Introduce punto X: ";
  cin >> puntox;
  cout << "Introduce punto Y: ";
  cin >> puntoy;
  Punto punt(puntox, puntoy);
  obj2.agregarPunto(punt);


  obj2.mostrar();
}
