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

 BigInt objnum(len,p);
 objnum.mostrar();

 // creo un objeto BigInt por defecto
 // BigInt obj;
 // obj.mostrar();

 // otro objeto2

 cout << "Introduce un numero:";
 cin >> p;
 len = strlen(p);
 BigInt obj3(len,p);
 obj3.mostrar();

 // creo un objeto con el numero introducido por teclado

 BigInt obj2(objnum);

 BigInt objetosuma = objnum.sumarBigInt(obj3);

 objetosuma.mostrar();


}
