#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "celda.h"


using namespace std;
class Lista{
  private:
    Celda *contenido;
  public:
    Lista(){
      contenido = 0;
    }
    int mostrar(int num_celda);
    void mostrar(Celda *cel, int num = 0);
    void mostrarInversa(Celda *cel, int num = 0);
    void agregarFinal(double info);
    int obtenerLongitud();
    void eliminarFinal();
    void agregarInicio(double info);
    void agregarPosicion(int posicion, double info);
    void liberarEspacio();
    Celda* obtener(int num_celda);
};


#endif
