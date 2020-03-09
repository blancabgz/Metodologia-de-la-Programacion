#include <iostream>
#include <cmath>
#include "valor.h"
using namespace std;

void Valor::mostrar() const{
  cout << "{ " << fila << " , " << columna << " , " << valor << " }";
}
