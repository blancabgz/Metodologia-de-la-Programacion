#include "utilidades.h"
#include <iostream>
#include <cstring>
using namespace std;

int localizarCadenaRepetida(char cadenapp[], char subcad[]){
  int posicion = 0;
  int contador = 0;
  bool encontrado = false;

  for(int i=0; i<strlen(cadenapp); i++){
    if(cadenapp[i] == subcad[contador]){
      contador++;
      if(encontrado == false){
        posicion = i;
      }
      encontrado = true;
    }
  }
  return posicion;
}
