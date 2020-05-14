#include <iostream>
#include "barquitos.h"

using namespace std;



/**
* @brief Constructor por defecto
*
*/
Barquitos::Barquitos(){
    this-> filas = 0;
    this-> columnas = 0;
    this -> value = 0;
    this -> ptrTablero = 0;
}

/**
 * @brief Constructor por argumentos
 *
 */
Barquitos::Barquitos(int filas, int columnas, int value){
  this->filas = filas;
  this->columnas = columnas;
  this->value = value;
  // creo el vector de filas
  ptrTablero = new int *[filas];

  // creamos el vector de columnas
  for(int i = 0; i < filas; i++){
    this->ptrTablero[i] = new int[columnas];
  }
  // relleno el tablero con todo agua
  for(int i = 0; i < filas; i++){
    for(int j = 0; j < columnas; j++){
      this->ptrTablero[i][j] = this->value;
    }
  }

}
/**
 * @brief Constructor de copia implementar
 *
 */
Barquitos::Barquitos(const Barquitos &b){

  this->filas = b.filas;
  this->columnas = b.columnas;
  this->value = b.value;

  this->ptrTablero = new int *[b.filas]; // creo el vector de filas y reservo memoria
  for(int i = 0; i < b.filas; i++){
    this->ptrTablero[i] = new int [b.columnas]; // creo el vector de columnas y reservo memoria
  }

  for(int i = 0; i < b.filas; i++) {
    for(int j = 0; j < b.columnas; j++){
      this->ptrTablero[i][j] = b.ptrTablero[i][j]; // relleno mi tablero con los valores del objeto que se me pasa
    }
  }


}

/**
 * @brief Destructor implementar
 *
 */

 Barquitos::~Barquitos(){
   for(int i = 0; i < this->filas; i++){
     delete []this->ptrTablero[i];
   }
   delete []this->ptrTablero;

   this->filas = 0;
   this->columnas = 0;
   this->value = 0;
 }

/**
 * @brief insertaBarco. Inserta un barco de un determinado tamaño y en una orientación especifica
 *
 * @param fila Fila desde donde comenzará a insertarse.
 * @param columna Columna desde donde comenzará a insertarse
 * @param size tamanio del barco, servira de caracter representativo.
 * @param orientacion  H horizontal, V vertical
 */

void Barquitos::insertarBarco(int fila, int columna, int value, char insertar){
  if (insertar == 'V'){
     for(int i = fila; i < fila + value; i++){
        if(i < this->filas){
           if(this->ptrTablero[i][columna] == 9){ // controlo que no se salga del tablero
              this->ptrTablero[i][columna] = value; // introduzco el valor
           } else {
              cout << "No se puede meter valor porque la casilla ya esta ocupada " << endl;
           }
        } else {
           cout << "El valor " << value << " que se intenta meter supera el tablero " << endl;
        }
     }
  }else{
    for(int i = columna; i < columna + value; i++){
       if(i < this->columnas){ // controlo que no se salga del tablero
          if(this->ptrTablero[fila][i] == 9){ // controlo que no este ocupado  osea que sea agua
             this->ptrTablero[fila][i] = value;
          } else {
             cout << "No se puede meter valor porque la casilla ya esta ocupada " << endl;
          }
       } else {
          cout << "El valor " << value <<" que se intenta meter supera el tablero " << endl;
       }
    }
  }

}

/**
 * @brief Sobrecarga del operador <<
 *
 * @param ios Objeto de buffer de entrada
 * @param b Objeto Barquitos
 * @return ostream&
 */

ostream & operator<<( ostream & ios, const Barquitos &b){
    ios << endl;
    for ( int i=0; i < b.filas; i++){
        for ( int c = 0; c < b.columnas; c++){
            ios << b.ptrTablero[i][c] << " ";
        }
        ios << endl;
    }
    ios << endl;
    return ios;
}
