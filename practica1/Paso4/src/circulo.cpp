#include <iostream>
#include <cmath>
#include "circulo.h"
using namespace std;


void Circulo::mostrar() const {

    // Formato de escritura del círculo: radio - (x,y)
    cout << radio <<  " - (" << centro.getX() << "," << centro.getY() << ")" << endl;
}

/**
 * Metodo para preguntar los valores de los datos miembro al
 * usuario. Por implementar (se recomienda leer el radio y
 * delegar en la clase Punto la lectura del punto que hace de
 * centro)
 */
void Circulo::leerDatos(){
    double puntox, puntoy,radiocirculo;
    cout << "Intruduce el radio del circulo : ";
    cin >> radiocirculo;
    setRadio(radiocirculo); // establecer valor del radio
    Punto puntocentral;
    puntocentral.leerDatos(); // leer los datos con el método perteneciente a la clase punto
    setCentro(puntocentral);

}

/**
 * Metodo para calcular el area de un circulo
 * @return
 */
double Circulo::calcularArea() const {
    // Se calcula el area
    double area=2*M_PI*pow(radio,2);
    // Se devuelve el resultado
    return area;
}
