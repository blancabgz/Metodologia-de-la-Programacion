/* EJERCICIO 1
Blanca Abril Gonzalez
*/


#include <iostream>
#include "utilidades.h"
using namespace std;


int main(){
  int tam,tam2,tam_aux,k;
  cout << "¿Cuántos números quiere introducir en la primera cadena? ";
  cin >> tam;
  double vector1[tam];
  introducirValores(vector1,tam);
  cout << "¿Cuántos números quiere introducir en la segunda cadena? ";
  cin >> tam2;
  double vector2[tam2];
  tam_aux = tam + tam2;
  double vectorAux[tam_aux];
  introducirValores(vector2,tam2);
  cout << endl;
  cout << "------------- VECTORES INTRODUCIDOS -------------" << endl;
  for(int b=0; b<tam; b++){
    cout << " " << vector1[b] << " ";
  }
  cout << endl;
  for(int a=0; a<tam2; a++){
    cout << " " << vector2[a] << " ";
  }


  mezcla(vector1,tam,vector2,tam2,vectorAux);
  ordenar(vectorAux,tam_aux);
  cout << endl;
  cout << "------------- VECTOR ORDENADO -------------" << endl;
  double vector_sin_repetir[tam_aux];
  int j = 0;
  for(int i=0; i<tam_aux-1;i++){
    if(vectorAux[i] != vectorAux[i+1]){
      vector_sin_repetir[j] = vectorAux[i];
      j++;
    }
  }
  vector_sin_repetir[j] = vectorAux[tam_aux-1];
  tam_aux = j+1;

  for(int z=0; z<tam_aux;z++){
    cout << " " <<vector_sin_repetir[z] << " ";
  }
  cout << endl;
}
