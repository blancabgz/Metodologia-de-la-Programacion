#include <iostream>
#include <cmath>
#include "polilinea.h"
#include "punto.h"
#include "utilidades.h"
using namespace std;

int main(){
  int npuntos, puntox, puntoy;
  cout << "Introduce el número de puntos que va a introducir: ";
  cin >> npuntos;

  Polilinea obj1(npuntos);

  for(int i = 0; i < npuntos; i++){
    cout << "Introduce punto X: ";
    cin >> puntox;
    cout << "Introduce punto Y: ";
    cin >> puntoy;
    Punto punt(puntox, puntoy);
    obj1.agregarPunto(punt);
  }
  cout << "Introduce punto X: ";
  cin >> puntox;
  cout << "Introduce punto Y: ";
  cin >> puntoy;

}
