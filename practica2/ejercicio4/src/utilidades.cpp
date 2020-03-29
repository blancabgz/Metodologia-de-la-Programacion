#include "utilidades.h"
#include <iostream>
#include <cstring>
using namespace std;

// Funcion que se encarga de localizar la cadena que se repite dentro de la principal.

bool localizarCadenaRepetida(char cadenapp[], char subcad[], int &posicion){
  bool diferencia = false;
  bool subcadena = false;

  for(int i=0; i<strlen(cadenapp) && !subcadena; i++ ){ // recorremos la cadena principal
    if(cadenapp[i] == subcad[0]){ // si una parte de la cadena principal coincide con la primera posicion de la subcadena
      posicion = i; // guarda la posicion
      diferencia = false;
      for(int j=0; j<strlen(subcad) && !diferencia;j++){ // recorre la subcadena para ver si coincide todo
        subcadena = true;
        if(subcad[j] != cadenapp[i+j]){ // si hay alguna diferencia, vuelve a empezar
          subcadena = false;
          diferencia = true;
        }
      }
    }
  }
  return subcadena;
}
