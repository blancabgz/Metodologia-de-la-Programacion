#include <iostream>
#include <cmath>
#include "punto.h"
using namespace std;


void Punto::mostrar() const {
  cout << "El valor del punto X es " << x << endl;
  cout << "El valor del punto Y es " << y << endl;
}

// método preguntar los valores de los datos miembro al usuario
void Punto::leerDatos(){
    // Se leen los datos del usaurio
    cout << "Introduzca punto X: ";
    cin >> x;
    cout << "Introduzca punto Y: ";
    cin >> y;
}
