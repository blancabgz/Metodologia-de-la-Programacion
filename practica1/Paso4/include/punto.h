#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>
#include <cmath>
using namespace std;

// Declaracion de la clase punto

class Punto {
private:
    double x; // coordenada x
    double y; // coordenada y

public:
    // constructor por defecto: valor 0 a las coordenadas
    Punto() {
      x = 0;
      y = 0;
    }

    //Constructor que permite asignar valor a los datos miembro.
    Punto(double vx, double vy) {
        x = vx;
        y = vy;
    }

    // acceso al dato x
    double getX() const {
        return x;
    }

    // acceso al dato y

    double getY() const {
        return y;
    }

    // metodo para asignar valor al dato miembro x
    void setX(double vx) {
        x = vx;
    }

    // metodo para asignar valor al dato miembro y
    void setY(double vy) {
        y = vy;
    }

    // muestra el contenido del objeto por pantalla. Fuera de la clase.
    void mostrar() const;

    // preguntar los valores de los datos miembro al usuario
    void leerDatos();
};

#endif
