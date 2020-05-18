#include <iostream>
#include <cmath>
#include "matrizdispersa.h"
#include "valor.h"
#include "utilidades.h"
using namespace std;

int main(){
  int fila,columna,numeroValores,nfila,ncolumna, tam;
  double valor;
  nfila = 0;
  ncolumna = 0;
  tam = 5;

  // cout << "Introduce el numero de valores significativos: ";
  // cin >> numeroValores;
  //
  // Valor * valores = new Valor[numeroValores];
  //
  // for(int i = 0; i < numeroValores; i++){
  //   cout << "Introduce la fila: ";
  //   cin >> fila;
  //   nfila++;
  //   cout << "Introduce la columna: ";
  //   cin >> columna;
  //   ncolumna++;
  //   cout << "Introduce un valor: ";
  //   cin >> valor;
  //   Valor valorsig(fila,columna,valor);
  //   valores[i] = valorsig;
  // }


  //MatrizDispersa matriz(nfila,ncolumna,valores,numeroValores);

  int * filaseg = new int [tam];
  int * columnaseg = new int[tam];
  double * valorseg = new double[tam];

  for(int i = 0; i < tam - 1; i++){
    cout << "Introduce fila de matriz: ";
    cin >> fila;
    filaseg[i] = fila;
    cout << "Introduce columna de matriz: ";
    cin >> columna;
    columnaseg[i] = columna;
    cout << "Introduce el valor: ";
    cin >> valor;
    valorseg[i] = valor;
  }
  filaseg[tam-1] = -15;
  columnaseg[tam-1] = -15;
  valorseg[tam-1] = -15;
  
  //
  // for(int i = 0; i < tam - 1; i++){
  //   cout << filaseg[i] << " ";
  // }

  MatrizDispersa matriz(filaseg, columnaseg, valorseg);

  delete[] filaseg;
  delete[] columnaseg;
  delete[] valorseg;

}
