#include <iostream>
#include <cmath>
#include "matriz.h"
#include "utilidades.h"
using namespace std;

int main(){
  int filas, columnas, filaInicio, filaFin, columnaInicio, columnaFin, eliminada, filaEliminar, columnaEliminar;
  eliminada = 0;

  cout << "Introduce el numero de filas: ";
  cin >> filas;

  cout << "Introduce el numero de columnas: ";
  cin >> columnas;
  cout << endl;

  // Creo un objeto Matriz con el numero de filas y columnas
  Matriz matriz(filas,columnas);
  Matriz *matr = &matriz;
  pedirValores(matr,filas,columnas);
  cout << endl;

  // Mostrar la matriz
  cout << "Matriz original: "<< endl;
  matriz.mostrarMatriz();
  cout << endl;

  // Crear matriz copia
  Matriz * matriz_copia = matriz.copiarMatriz();

  // Mostrar la matriz copia
  cout << "Matriz copiada a partir de la original" << endl;
  matriz_copia->mostrarMatriz();
  cout << endl;
  delete matriz_copia;

  cout << "Introduce fila de inicio para crear una submatriz(tenga en cuenta que la primera fila es la 0): ";
  cin >> filaInicio;
  cout << "Introduce fila de fin para crear una submatriz (tenga en cuenta que la primera fila es la 0): ";
  cin >> filaFin;
  cout << "Introduce columna de inicio para crear una submatriz (tenga en cuenta que la primera columna es la 0): ";
  cin >> columnaInicio;
  cout << "Introduce columna de fin para crear una submatriz(tenga en cuenta que la primera fila es la 0): ";
  cin >> columnaFin;
  cout << endl;

  if(filaInicio < 0 || filaInicio > matriz.getFilas() || filaFin < 0 || filaFin > matriz.getFilas() || columnaInicio < 0 || columnaFin < 0
  || columnaInicio > matriz.getColumnas() || columnaFin > matriz.getColumnas()){
    cout << "Has introducido mal los datos" << endl;
  }else{
    // Creo submatriz con las filas y columnas introducidas
    cout << "Submatriz desde elemento (" << filaInicio << ", " << columnaInicio << ") hasta (" << filaFin << "," << columnaFin << ")" << endl;
    Matriz * submatriz = matriz.extraerSubmatriz(filaInicio,columnaInicio,filaFin,columnaFin);
    submatriz->mostrarMatriz();
    delete submatriz;
    cout << endl;
  }

  // Eliminar una fila introducida por el usuario
  cout << "Introduce una fila a eliminar(ten en cuenta que la primera fila es la posicion 0): ";
  cin >> filaEliminar;

  cout << matriz.getFilas();
  if(filaEliminar < 0 || filaEliminar + 1 > matriz.getFilas()){
    cout << "No existe esa fila" << endl;
  }else{
    cout << "Matriz obtenida al eliminar la fila " << filaEliminar << endl;
    matriz.eliminarFila(filaEliminar);
    matriz.mostrarMatriz();
    cout << endl;
  }

  // Eliminar una columna introducida por el usuario
  cout << "Introduce una columna a eliminar(ten en cuenta que la primera columna es la posicion 0): ";
  cin >> columnaEliminar;

  if(columnaEliminar < 0 || columnaEliminar > matriz.getColumnas()){
    cout << "No existe esa columna" << endl;
  }else{
    cout << "Matriz obtenida al eliminar la columna " << columnaEliminar << endl;
    matriz.eliminarColumna(columnaEliminar);
    matriz.mostrarMatriz();
    cout << endl;
  }


}
