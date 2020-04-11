#ifndef LISTA_H
#define LISTA_H

#include <iostream>

using namespace std;

class Celda{
  private:
    Celda *sig;
    double info;
  public:
    Celda(){
      sig = 0;
      info = 0;
    }

    Celda(double info, Celda * sig){
      this->sig = sig;
      this->info = info;
    }

    void setSig(Celda *sig){
      this->sig = sig;
    }
    void setValor(double info){
      this->info = info;
    }
    Celda * getSig(){
      return sig;
    }

    double getValor(){
      return info;
    }

};

class Lista{
  private:
    Celda *contenido;
  public:
    Lista(){
      contenido = 0;
    }
    int mostrar(int num_celda);
    void mostrar();
    void agregarFinal(double info);
    int obtenerLongitud();
    void eliminarFinal();
    void agregarInicio(double info);
    void agregarPosicion(int posicion, double info);
    void liberarEspacio();
    Celda* obtener(int num_celda);
};


#endif
