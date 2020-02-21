/**
BLANCA ABRIL GONZÁLEZ GRUPO E3
PASO 4

*  Un ejemplo de ejecución podria ser:
*  Introduzca un circulo en formato radio-(x,y): 3-(0,0)
*  Introduzca otro circulo: 4-(4,0)
*  El círculo que pasa por los dos centros es: 2-(2,0)

Compilación:

g++ -c -o obj/punto.o -Iinclude src/punto.cpp
g++ -c -o obj/circulo.o -Iinclude src/circulo.cpp
g++ -c -o obj/utilidades.o -Iinclude src/utilidades.cpp
g++ -c -o obj/principal.o -Iinclude src/principal.cpp

Genera la biblioteca en el directorio lib y ejecutable

ar rvs lib/libformas.a obj/punto.o obj/circulo.o obj/utilidades.o
g++ -Llib -o bin/principal obj/principal.o -lformas

Ejecutar: bin/principal

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
