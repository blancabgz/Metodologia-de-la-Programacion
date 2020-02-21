/**
BLANCA ABRIL GONZÁLEZ GRUPO E3
PASO 5

*  Un ejemplo de ejecución podria ser:
*  Introduzca un circulo en formato radio-(x,y): 3-(0,0)
*  Introduzca otro circulo: 4-(4,0)
*  El círculo que pasa por los dos centros es: 2-(2,0)

Compilación: make
Ejecución: bin/principal

**/

#include <iostream>
#include <cmath>
#include "utilidades.h"
#include "punto.h"
#include "circulo.h"
using namespace std;

int main() {
    Circulo c1, c2;

    do {
        // Se leen los datos del circulo 1
        c1.leerDatos();

        // Igual con el circulo 2
        c2.leerDatos();
    } while (calcularDistancia(c1.getCentro(), c2.getCentro()) == 0);

    // Se calcula la el punto medio de los dos centros
    Punto puntoMedio=calcularPuntoMedio(c1.getCentro(), c2.getCentro());

    // Se crea objeto de la clase circulo a partir de los
    // datos
    Circulo c3(puntoMedio, calcularDistancia(c1.getCentro(), c2.getCentro()) / 2);

    // Se muestra el resultado por pantalla
    cout << "El círculo que pasa por los dos centros es: ";
    c3.mostrar();
    cout << endl;
}
