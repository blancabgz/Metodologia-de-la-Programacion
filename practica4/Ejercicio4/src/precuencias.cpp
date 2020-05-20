#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <stdio.h>
#include "precuencias.h"
#include "pareja.h"
using namespace std;

// cosntructor
Precuencias::Precuencias(){
  this->npares = 1;
  this->parejas = nullptr;
}

// constructor por parametro
Precuencias::Precuencias(const char * numero, const int tam){
  int contador;
  this->npares = 10;
  this->parejas = new Pareja[10];

  inicializar();
  for(int i = 0; i < tam; i++){ // aumento nveces según los numeros que se hayan introducido
    int num = (int) numero[i] - (int) '0'; // identifico numero
     //obtengo el numero de veces que ya ha salido ese numero, le sumo 1 y lo guardo
    this->parejas[num].setNveces(this->parejas[num].getNveces() + 1);
  }

  // creo un vector auxiliar
  Pareja * aux = new Pareja[10];
  contador = 0;

  // guardo en el vector auxiliar los numeros que se han repetido
  for(int i = 0; i < 10; i++){
    if(this->parejas[i].getNveces() != 0){
      aux[contador] = this->parejas[i];
      contador++;
    }
  }

  delete [] this->parejas;
  this->parejas = new Pareja[contador];

  // copio el vector auxiliar con todos los numeros que se han repetido al menos una vez
  for(int i = 0; i < contador; i++){
    this->parejas[i] = aux[i];
  }

  this->npares = contador;

  delete [] aux;
  aux = nullptr;
}

// constructor por copia
Precuencias::Precuencias(const Precuencias &objacopiar){
  this->npares = objacopiar.npares;

  if(this->npares > 0){
    this->parejas = new Pareja [this->npares];
    for(int i = 0; i < this->npares; i++){
      this->parejas[i] =  objacopiar.parejas[i];
    }
  }else{
    this->parejas = nullptr;
  }

}

// destructor

Precuencias::~Precuencias(){
  liberarMemoria();
}


// funcion ordenar vector
void Precuencias::ordenar(){
  for(int i = 1; i < this->npares; i++){
    for(int j = 0; j < this->npares - 1 ; j++){
      if(this->parejas[j].getDato() > this->parejas[j + 1].getDato()){
        Pareja  paraux = this->parejas[j];
        this->parejas[j] = this->parejas[j+1];
        this->parejas[j+1] = paraux;
      }
    }
  }
}


// funcion agregar valor
void Precuencias::agregarValor(int num){
  int cifras = 0; // numero de cifras que tiene el numero
  bool encontrado = false; //si la pareja ya se encuentra

  for (int i=num; i>0; i/=10, cifras++); // cuento las cifras

  char * numero = new char[cifras + 1];
  sprintf(numero, "%d", num); // convierto el int a char


  for(int j = 0; j < numero[j] && numero[j] != '\0'; j++){ // recorro el vector del entero introducido
    encontrado = false;
    int pos;

    for(int i = 0; i<this->npares && !encontrado; i++){
      if(this->parejas[i].getDato() == (int) numero[j] - (int) '0'){ // si encontramos un dato repetido
        encontrado = true;
        pos = i;
      }
    }

    if(encontrado){ // pareja repetida
      this->parejas[pos].setNveces(this->parejas[pos].getNveces() + 1); // aumento el tamaño
    }else{ // pareja no repetida
      this->npares++; // aumentamos el tamaño del numero de parejas que se repiten
      Pareja * auxparejas = new Pareja[this->npares]; // creamos un vector auxiliar con el nuevo tamaño

      for(int k = 0; k < this->npares - 1; k++){ // copiamos el vector parejas en el auxiliar
        auxparejas[k] = this->parejas[k];
      }
      auxparejas[this->npares - 1].setDato((int) numero[j] - (int) '0'); // introducimos el nuevo valor
      auxparejas[this->npares - 1].setNveces(1);

      delete [] parejas;
      this->parejas = auxparejas;
      ordenar();
    }
  }
}

// vemos si dos sencuencias son iguales
bool Precuencias::operator == (const Precuencias & prec){ // vemos si dos sencuencias son iguales
  bool iguales = false;
  if(this->npares == prec.npares){
    int contador = 0;
    for(int i = 0; i < this->npares; i++){
      if(this->parejas[i].getDato() == prec.parejas[i].getDato() && this->parejas[i].getNveces() == prec.parejas[i].getNveces()){
        contador++; // si coincide el dato y las veces que se repite aumentamos el contador
      }
    }
    if(contador == this->npares){// si el contador y el numero de parejas coinciden, es que son iguales
      iguales = true;
    }
  }
  return iguales;

}

// vemos si dos sencuencias son distintas
bool Precuencias::operator != (const Precuencias & prec){
  bool iguales = true;
  if(this->npares == prec.npares){
    int tam = 0;
    for(int i = 0; i < this->npares; i++){
      if(this->parejas[i].getDato() == prec.parejas[i].getDato() && this->parejas[i].getNveces() == prec.parejas[i].getNveces()){
        tam++;
      }
    }
    if(tam == this->npares){
      iguales = false;
    }
  }
  return iguales;

}

ostream & operator << (ostream &os, const Precuencias &prec){
  for(int i = 0; i < prec.npares; i++){
    os << "El numero "<< prec.parejas[i].getDato() << " tiene ";
    os << prec.parejas[i].getNveces() << " repeticiones" << endl;
  }
  return os;
}
