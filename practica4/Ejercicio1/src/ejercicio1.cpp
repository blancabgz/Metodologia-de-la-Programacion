#include <iostream>
#include <cmath>
#include "bigint.h"
#include "utilidades.h"
#include <string.h>
using namespace std;

int main(){
 char *p =  new char[256];
 int len;

 // usuario introduce numero

 cout << "Introduce un numero:";
 cin >> p;
 len = strlen(p);

 // creo un objeto BigInt por defecto
 BigInt obj;
 obj.mostrar();

 // creo un objeto con el numero introducido por teclado
 BigInt objnum(len,p);
 objnum.mostrar();
 BigInt obj2(objnum);


}
