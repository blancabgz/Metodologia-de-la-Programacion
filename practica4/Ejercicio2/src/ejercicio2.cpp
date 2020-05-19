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

  // constructor por defecto
  Polilinea obj1(npuntos);
  cout << "Constructor por defecto: " << endl;
  obj1.mostrar();

  cout << "Agregar Punto: " << endl;
  for(int i = 0; i < npuntos; i++){
    cout << "Introduce punto X: ";
    cin >> puntox;
    cout << "Introduce punto Y: ";
    cin >> puntoy;
    Punto punt(puntox, puntoy);
    obj1.agregarPunto(punt);
  }

  cout << "Polilinea con todos los puntos agregados: " << endl;
  obj1.mostrar();

  // añadir puntos
  cout << "Polilinea 2: " << endl;
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

  cout << "Polilinea 2: " << endl;
  obj2.mostrar();

  // copia objeto
  Polilinea objetocopiado(obj2);
  cout << "Objeto Copiado: " << endl;
  objetocopiado.mostrar();

  // añadir punto
  cout << endl;
  cout << "Introducir punto extra" << endl;
  cout << "Introduce punto X: ";
  cin >> puntox;
  cout << "Introduce punto Y: ";
  cin >> puntoy;
  Punto punt(puntox, puntoy);
  obj2.agregarPunto(punt);
  obj2.mostrar();

  cout << endl;

  // operador suma
  Polilinea poli = obj1 + obj2;
  cout << "Suma Polilinea 1 y Polilinea 2" << endl;
  poli.mostrar();

}
