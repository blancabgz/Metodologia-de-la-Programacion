#ifndef CIRCULO_H
#define CIRCULO_H

#include "punto.h"



class Circulo {

private:
    Punto centro; // centro del circulo
    double radio; // radio del circulo
public:
    // constructor por defecto. Asigna 0 a todos los datos miembro.
    Circulo() {
      centro.setX(0);
      centro.setY(0);
      radio = 0;
    }
    // constructor que permite asignar valor a los datos miembro del objeto.

    Circulo(Punto vcentro, double vradio) {
      centro = vcentro;
      radio = vradio;
    }

     // Metodo para acceder al valor del dato miembro centro.

    Punto getCentro() const {
      return centro;
    }

     // Metodo para acceder al valor del dato miembro radio

    double getRadio() const {
        return radio;
    }

    /**
     * Metodo para asignar el valor del dato miembro centro. A
     * implementar
     * @param puntoCentro
     */
    void setCentro(Punto puntoCentro){
        centro = puntoCentro;
    }

    /**
     * Metodo para asignar el valor del radio. A implementar
     * @param valorRadio
     */
    void setRadio(double valorRadio){
        radio = valorRadio;
    }

    /**
     * Metodo para mostrar por pantalla los datos de un objeto.
     * A implementar fuera del cuerpo de la clase
     */
    void mostrar() const;

    /**
     * Metodo para preguntar los valores de los datos miembro al
     * usuario. Por implementar, fuera del ambito de la clase
     */
    void leerDatos();

    /**
     * Metodo para calcular el area de un objeto. A implementar
     * fuera del cuerpo de la clase
     * @return
     */
    double calcularArea() const;
};

#endif
