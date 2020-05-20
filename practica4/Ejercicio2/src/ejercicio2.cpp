#include <iostream>
#include <cmath>
#include "polilinea.h"
#include "punto.h"
using namespace std;

int main(){
  int npuntos, puntox, puntoy,npuntos2;
  cout << "Introduce el número de puntos que va a introducir: ";
  cin >> npuntos;

  // constructor por defecto
  Polilinea obj1(npuntos);
  cout << "Constructor por defecto: " << endl;
  cout << obj1;

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
  cout << obj1;

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
  cout << obj2;

  // copia objeto
  Polilinea objetocopiado(obj2);
  cout << "Objeto Copiado: " << endl;
  cout << objetocopiado;


  // añadir punto
  cout << endl;
  cout << "Introducir punto extra" << endl;
  cout << "Introduce punto X: ";
  cin >> puntox;
  cout << "Introduce punto Y: ";
  cin >> puntoy;
  Punto punt(puntox, puntoy);
  obj2.agregarPunto(punt);
  cout << obj2;

  cout << endl;

  // operador suma
  Polilinea poli = obj1 + obj2;
  cout << "Suma Polilinea 1 y Polilinea 2" << endl;
  cout << poli;

}
