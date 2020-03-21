/* EJERCICIO 4
Blanca Abril Gonzalez

Implementa una funcion que reciba como entrada dos cadenas de caracteres estilo C
y compruebe si la segunda cadena esta contenida en la primera. En caso afirmativo
devuelve la posición y en caso contrario devuelve -1.
*/


#include <iostream>
#include "utilidades.h"
#include <string>
#include <cstring>

using namespace std;

int main(){
const int MAXTAM = 1000;
char cadenapp[MAXTAM]; // declaro la cadena principal
char cadena_busca[MAXTAM]; // declaro la cadena donde busco

cout << "Introduce una cadena principal: ";
cin.getline(cadenapp,MAXTAM);

cout << "Introduce la cadena a comparar: ";
cin.getline(cadena_busca,MAXTAM);

int pos = localizarCadenaRepetida(cadenapp,cadena_busca);
cout << pos << endl;

}
