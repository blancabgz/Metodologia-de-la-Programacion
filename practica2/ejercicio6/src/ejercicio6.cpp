/* EJERCICIO 6
Blanca Abril Gonzalez
*/


#include <iostream>
#include "utilidades.h"
using namespace std;

int main(){
  int filaMa1,colMat1, filaMa2, colMat2;
  const int FIL = 20, COL = 30;
  double matriz1[FIL][COL], matriz2[FIL][COL], matrizRes[FIL][COL];
  cout << "Introduce el número de filas y columnas de la primera matriz: ";
  cin >> filaMa1 >> colMat1;
  introducirValores(matriz1,filaMa1,colMat1);
  cout << "Introduce el número de filas y columnas de la segunda matriz: ";
  cin >> filaMa2 >> colMat2;
  introducirValores(matriz2,filaMa2,colMat2);

  if(filaMa1 == filaMa2 && colMat1 == colMat2 || colMat2 == filaMa1){
    cout << "Operacion Valida 1" << endl;
    sumarMatrices(matrizRes,matriz1,filaMa1,colMat1,matriz2,filaMa2,colMat2);
  }else{
    cout << "Operacion Valida 0" << endl;
    return 0;
  }

  for(int i=0; i<filaMa1; ++i){
        for(int j=0; j<colMat2; ++j){
            cout<<matrizRes[i][j]<<" ";
        }
        cout<<endl;
    }

}
