#include <iostream>
#include <cmath>
#include "bigint.h"
#include "utilidades.h"
#include <string.h>
using namespace std;

int main(){
 char *p =  new char[256];
 int len;

 // creo un objeto BigInt por defecto
 BigInt obj;
 cout << "Objeto por defecto es: ";
 cout << obj;

 cout << "---------------------------------------" << endl;


 // creo un objeto con el numero introducido por el usuario
 cout << "Objeto creado por parametro" << endl;
 cout << "Introduce un numero: ";
 cin >> p;
 len = strlen(p);

 BigInt objnum(len,p);
 cout << objnum;


 // creo un objeto por constructor por copia

 BigInt objcopia(objnum);
 cout << "Numero copiado: ";
 cout << objcopia;


 // otro objeto2

 cout << "Introduce un numero: ";
 cin >> p;
 len = strlen(p);
 BigInt obj3(len,p);
 cout << obj3;


 // suma dos objetos

 BigInt objetosuma = objnum.sumarBigInt(obj3);
 cout << "Suma es igual a  ";
 cout << objetosuma;


}
