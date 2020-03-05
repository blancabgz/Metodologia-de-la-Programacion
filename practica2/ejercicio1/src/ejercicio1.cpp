/* EJERCICIO 1
Blanca Abril Gonzalez
*/


#include <iostream>
using namespace std;

void introducirValores(double array[], int tam){
  int valor;
  for(int i=0; i<tam; i++){
    cout << "Intruduce un valor: ";
    cin >> valor;
    array[i] = valor;
  }
}


void ordenar(double array[], int tam){
  float temporal;
  int aux;

  for(int i=0;i<tam; i++){ // recorre todas las posiciones
    for(int j=0; j<tam-1; j++){ // comparar
        if(array[j] > array[j+1]){
          temporal = array[j]; // guardas en una variable auxiliar el mayor
          array[j] = array[j+1];
          array[j+1] = temporal;
        }
      }
    }
}

void mezcla(double array1[],int tam1,double array2[], int tam2, double arrayMezcla[]){
  int fin_vector;
  for(int i=0; i<tam1; i++){
    arrayMezcla[i] = array1[i];
  }
  fin_vector = tam1;
  for(int j=0; j<tam2; j++, fin_vector++){
     arrayMezcla[fin_vector] = array2[j];
  }
}


int main(){
  int tam,tam2,tam_aux,k;
  cout << "¿Cuántos números quiere introducir en la primera cadena?";
  cin >> tam;
  double vector1[tam];
  introducirValores(vector1,tam);
  cout << "¿Cuántos números quiere introducir en la segunda cadena?";
  cin >> tam2;
  double vector2[tam2];
  tam_aux = tam + tam2;
  double vectorAux[tam_aux];
  introducirValores(vector2,tam2);
  mezcla(vector1,tam,vector2,tam2,vectorAux);
  ordenar(vectorAux,tam_aux);
cout << "------- VECTOR ORDENADO PERO REPETIDO --------- " << endl;
  for(int i = 0; i < tam_aux; i++){
     cout << vectorAux[i] << endl;
 }
 cout << "------- VECTOR ORDENADO -------------" << endl;
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
    cout << vector_sin_repetir[z] << endl;
  }
}
