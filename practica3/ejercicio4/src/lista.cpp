#include <iostream>
#include <cmath>
#include "lista.h"
#include "celda.h"
using namespace std;

// funcion para mostrar una celda de la lista (control main de que no meta numero mayor la longitud de la lista)
int Lista::mostrar(int num_celda){
  Celda *cel;
  cel = this->contenido;
  for(int i = 0; i < num_celda && cel != 0; i++){
    cel = cel->getSig();
  }
  return cel->getValor(); // retorna el contenido de la celda
}

// funcion para mostrar el contenido de la lista
void Lista::mostrar(){
  Celda *cel;
  cel = this->contenido;
  while(cel != 0){
    cout << cel->getValor();
    if(cel->getSig() != 0){
      cout << " -> ";
    }
    cel = cel->getSig();
  }
  cout << endl;
}

// funcion para añadir un elemento al final de la lista
void Lista::agregarFinal(double info){
  Celda *cel; // creo puntero a una Celda
  if(this->contenido){ //lista tiene algo
    cel = this->contenido;
    while(cel->getSig() != 0){ // mientras el puntero siguiente sea distinto de nulo
      cel = cel->getSig(); // puntero cel apunta al siguiente
    }
    cel->setSig(new Celda);
    cel = cel->getSig();
  }else{ //lista vacia
    this->contenido = new Celda();
    cel = this -> contenido;
  }
  cel->setValor(info); // le paso el contenido
  cel->setSig(0); // puntero siguiente a null
}

// funcion para obtener la longitud de la lista
int Lista::obtenerLongitud(){
  int contador = 0;
  Celda *cel; // creo un puntero tipo celda
  cel = this->contenido;
  while(cel != 0){
    contador++; // aumento en contador
    cel = cel->getSig();
  }
  return contador;
}

// funcion que elimina un elemento del final de la lista
void Lista::eliminarFinal(){
  Celda *cel;
  if(this->contenido){
    cel = this->contenido;
    while((cel->getSig())->getSig() != 0){
      cel = cel->getSig();
    }
    delete cel->getSig();
    cel->setSig(0);
  }
}

// funcion que añade un elemento al inicio de la lista
void Lista::agregarInicio(double info){
  Celda *cel;
  cel = new Celda();
  cel->setValor(info);
  cel->setSig(this->contenido);
  this->contenido = cel;
  cel = 0;
}

// funcion que agrega un valor en la posicion introducida por el usuario
void Lista::agregarPosicion(int posicion, double info){
  Celda *cel,*aux;
  aux = this->contenido;
  for(int i = 0; i < posicion - 1; i++){
    aux = aux->getSig();
  }
  cel = new Celda();
  cel->setValor(info);
  cel->setSig(aux->getSig());
  aux->setSig(cel);
  cel = 0;
  aux = 0;
}

// funcion que borra el contenido de la lista
void Lista::liberarEspacio(){
  Celda *cel;
  while(obtenerLongitud() > 1){
    cel = this->contenido;
    while((cel->getSig())->getSig() != 0){
      cel = cel->getSig();
    }
    delete cel->getSig();
    cel->setSig(0);
  }
  this->contenido = 0;
}

// funcion que obtiene un puntero al numero de celda introducida por el usuario
Celda* Lista::obtener(int num_celda){
  Celda *cel;
  cel = 0;
  if(this->contenido){
    cel = this->contenido;
    for(int i = 0; i < num_celda && cel != 0; i++){
      cel = cel->getSig();
    }
  }
  return cel;
}
