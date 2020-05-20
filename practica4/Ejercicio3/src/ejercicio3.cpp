#include <iostream>
#include <cmath>
#include "matrizdispersa.h"
#include "valor.h"
using namespace std;

int main(){
  int fila,columna,numeroValores,nfila,ncolumna, tam;
  double valor;
  nfila = 0;
  ncolumna = 0;
  tam = 5;

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


  MatrizDispersa matriz1(nfila,ncolumna,valores,numeroValores);

  cout << "La matriz introducida es:" << endl;
  cout << matriz1;

  int * filaseg = new int [tam];
  int * columnaseg = new int[tam];
  double * valorseg = new double[tam];

  cout << "Introduce una nueva matriz " << endl;
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

  // creo al matriz
  MatrizDispersa matriz2(filaseg, columnaseg, valorseg);
  cout << "La matriz introducida es:" << endl;
  cout << matriz2;

  // suma de matrices
  cout << "La suma de las dos matrices introducidas son:" << endl;
  cout << matriz1 + matriz2;

  delete[] filaseg;
  delete[] columnaseg;
  delete[] valorseg;



}
