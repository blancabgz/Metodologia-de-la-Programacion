#ifndef LISTA_H
#define LISTA_H

#include <iostream>

using namespace std;

struct Celda{
    double info;
    Celda *sig;
};

class Lista{
  private:
    Celda *contenido;
  public:
    Lista(){
      contenido=0;
    }

    void anadirCelda(double info){
      Celda *cel; // creo puntero a una Celda
      if(this->contenido){ //lista tiene algo
        cel = this->contenido;
        while(cel->sig != 0){ // mientras el puntero siguiente sea distinto de nulo
          cel = cel->sig; // puntero cel apunta al siguiente
        }
        cel->sig = new Celda;
        cel = cel->sig;
      }else{ //lista vacia
        this->contenido = new Celda();
        cel = this -> contenido;
      }
      cel->info = info; // le paso el contenido
      cel->sig = 0; // puntero siguiente a null
    }

    int mostrar(int num_celda){
      Celda *cel;
      cel = this->contenido;
      for(int i=0; i<num_celda && cel != 0;i++){
        cel = cel->sig;
      }
      return cel->info;
    }

    void mostrar(){
      Celda *cel;
      cel = this->contenido;
      while(cel != 0){
        cout << cel->info << " -> ";
        cel = cel->sig;
      }
    }

};


#endif
