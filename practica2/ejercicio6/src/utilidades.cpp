#include "utilidades.h"
#include <iostream>
using namespace std;

// Funcion que recorre la matriz y va pidiendole valores al usuario
// y los guarda en la fila y columna indicadas


void introducirValores(double matriz[][COL],int filas, int columnas){
  double valor;
  for(int i = 0; i<filas; i++){
    for(int j=0; j<columnas; j++){
      cout << "Introduce un valor en la fila " << i << " y columna " << j << " :" ;
      cin >> valor;
      matriz[i][j] = valor;
    }
  }
}

// Funcion que se encarga de hacer el producto de ambas matrices y guardarla en una matriz resultado

void productoMatrices(double matrizRes[][COL],double matriz1[][COL], int fila1, int col1, double matriz2[][COL],int fila2, int col2){
  matriz1[fila1][col1];
  matriz2[fila2][col2];

  for(int k=0; k< fila1; k++){
    for(int l=0; l<col2; l++){
        // primero inicializo la matriz resultado a 0
        matrizRes[k][l] = 0;
          // Multiplico las matrices
          for(int m=0; m<col1;m++){
            matrizRes[k][l] = matrizRes[k][l] + matriz1[k][m] * matriz2[m][l];
          }
    }
  }

}
