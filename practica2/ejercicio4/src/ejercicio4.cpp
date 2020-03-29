/*

BLANCA ABRIL GONZÁLEZ GRUPO E3
Ejercicio 4:

Implementa una funcion que reciba como entrada dos cadenas de caracteres estilo C
y compruebe si la segunda cadena esta contenida en la primera.

*/


#include <iostream>
#include "utilidades.h"
#include <string>
#include <cstring>

using namespace std;

int main(){
  const int MAXTAM = 1000;
  int posicion=0;
  char cadenapp[MAXTAM]; // declaro la cadena principal
  char cadena_busca[MAXTAM]; // declaro la cadena donde busco

  cout << "Introduce una cadena principal: "; // Introducimos la cadena principal
  cin.getline(cadenapp,MAXTAM);

  cout << "Introduce la cadena a comparar: "; // Introducimos la cadena a comparar.
  cin.getline(cadena_busca,MAXTAM);

  bool repetida = localizarCadenaRepetida(cadenapp,cadena_busca,posicion);

  if(repetida){
    cout << "Pertenece a la cadena y la posición es posicion: " << posicion << endl;
  }else{
    cout << "No pertenece a la cadena " << endl;
  }

}
