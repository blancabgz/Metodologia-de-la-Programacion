/*
BLANCA ABRIL GONZÁLEZ GRUPO E3
Ejercicio 6:

Programe una función que realice el producto de dos matrices. Debe facilitarse a su
vez una función que permita visualizar el contenido de una matriz para comprobar el
correcto funcionamiento del código realizado.

*/


#include <iostream>
#include "utilidades.h"
using namespace std;

int main(){
  int filaMa1,colMat1, filaMa2, colMat2;
  const int FIL = 20, COL = 30;
  double matriz1[FIL][COL], matriz2[FIL][COL], matrizRes[FIL][COL];
  // Introducimos los datos de ambas matrices
  cout << "Introduce el número de filas y columnas de la primera matriz: ";
  cin >> filaMa1 >> colMat1;
  if(filaMa1 > FIL || filaMa1 <= 0 || colMat1 > COL || colMat1 <= 0){
    cout << "Valores de fila y columna mal introducidos" << endl;
    return 0;
  }
  introducirValores(matriz1,filaMa1,colMat1);
  cout << "Introduce el número de filas y columnas de la segunda matriz: ";
  cin >> filaMa2 >> colMat2;
  if(filaMa2 > FIL || filaMa2 <= 0 || colMat2 > COL || colMat2 <= 0){
    cout << "Valores de fila y columna mal introducidos" << endl;
    return 0;
  }
  introducirValores(matriz2,filaMa2,colMat2);

  // Las matrices solo se pueden multiplicar si tienen la misma dimension
  // o si fila de la primera matriz coincide con la fila de la segunda matriz
  // y la columna de la segunda matriz coincide con la fila de la primera matriz.

  cout << endl;
  for(int i=0; i<filaMa1; i++){
    for(int j=0; j<colMat1; j++){
      cout <<matriz1[i][j]<<" ";
    }
    cout << endl;
  }

  cout << endl;

  for(int i=0; i<filaMa2; i++){
    for(int j=0; j<colMat2; j++){
      cout <<matriz2[i][j]<<" ";
    }
    cout << endl;
  }

  cout << endl;
  if(filaMa1 == filaMa2 && colMat1 == colMat2 || colMat2 == filaMa1){
    cout << "Operacion Valida 1" << endl;
    productoMatrices(matrizRes,matriz1,filaMa1,colMat1,matriz2,filaMa2,colMat2);
  }else{
    cout << "Operacion Valida 0" << endl;
    return 0;
  }


  // Imprimos la matriz resultante
  for(int i=0; i<filaMa1; ++i){
        for(int j=0; j<colMat2; ++j){
            cout<<matrizRes[i][j]<<" ";
        }
        cout<<endl;
    }

}
