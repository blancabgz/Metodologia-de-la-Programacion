#include <iostream>
#include <cmath>
#include "matrizdispersa.h"
#include "valor.h"
#include "utilidades.h"
using namespace std;

int main(){
  int fila,columna,numeroValores,nfila,ncolumna;
  double valor;
  nfila = 0;
  ncolumna = 0;

  cout << "Introduce el numero de valores significativos: ";
  cin >> numeroValores;

  Valor * valores = new Valor[numeroValores];

  for(int i = 0; i < numeroValores; i++){
    cout << "Introduce la fila: ";
    cin >> fila;
    nfila++;
    cout << "Introduce la columna: ";
    cin >> columna;
    ncolumna++;
    cout << "Introduce un valor: ";
    cin >> valor;
    Valor valorsig(fila,columna,valor);
    valores[i] = valorsig;
  }

  MatrizDispersa matriz(nfila,ncolumna,valores,numeroValores);

}
