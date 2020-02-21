
#include <iostream>
#include <cmath>
#include "utilidades.h"
using namespace std;

/*
   Calcular la distancia entre dos puntos.
   Recibe como argumento dos objetos de la clase Punto.
*/

double calcularDistancia(Punto p1, Punto p2) {
    double distancia_entre_puntos;
    distancia_entre_puntos = sqrt(pow((p2.getX()- p1.getX()),2) + pow((p2.getY() - p1.getY()),2));
    return distancia_entre_puntos;
}

/*
   Calcular la el punto medio entre dos puntos.
   Recibe como argumento dos objetos de la clase Punto.
*/

Punto calcularPuntoMedio(Punto p1, Punto p2) {
    double puntomedio1, puntomedio2;
    puntomedio1 = (p1.getX()+p2.getX())/2;
    puntomedio2 = (p1.getY()+p2.getY())/2;

    Punto puntomedio(puntomedio1,puntomedio2);
    return puntomedio;
}

/*
   Calcular la distancia entre los centros de los circulos
   Recibe como argumento dos objetos de la clase Circulo.
*/

double calcularDistancia(Circulo c1, Circulo c2) {
    // Se recuperan los centros de ambos circulos
    Punto cc1=c1.getCentro();
    Punto cc2=c2.getCentro();

    // Se calcula la distancia entre los dos puntos
    double distancia=calcularDistancia(cc1, cc2);

    // Se devuelve el valor calculado
    return distancia;
}
/*
   Determina si el punto pasado como primer argumento es interior al segundo circulo.
   Recibe como argumento un objetos de la clase Punto y la clase Circulo.
*/

bool comprobarInterior(Punto p, Circulo c) {
    bool interior=false;

    // Se calcula si la distancia entre el punto y el centro
    // del circulo es menor que el radio del circulo
    Punto cc=c.getCentro();
    double radio=c.getRadio();

    // Se calcula la distancia
    double distancia=calcularDistancia(p, cc);

    // Si es interior, se cambia el valor del flag
    if(distancia <= radio){
        interior=true;
    }

    // Se devuelve el valor de interior
    return interior;
}
