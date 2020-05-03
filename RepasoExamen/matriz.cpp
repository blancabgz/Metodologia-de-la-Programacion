#include <iostream>

using namespace std;

class Matriz{
  private:
    int **ptrMatriz;
    int n_filas;
    int n_columnas;

  public:
    // constructor por defecto
    Matriz(){
      ptrMatriz = 0;
      n_filas   = 0;
      n_columnas = 0;
    }

    Matriz(int n_filas, int n_columnas, int valor){
      this->n_filas = n_filas;
      this->n_columnas = n_columnas;

      // reserva de memoria
      this->ptrMatriz = new int * [n_filas];
      for(int i = 0; i < n_filas; i++){
        // reservo memoria
        this->ptrMatriz[i] = new int[n_columnas];
        for(int j = 0; j < n_columnas; j++){
          this->ptrMatriz[i][j] = valor;
        }
      }

    }

    // constructor de copia
    Matriz(const Matriz &m){
      this->ptrMatriz = new int * [m.n_filas]; // creo la matriz
      this->n_filas = m.n_filas; // actualizas n filas
      this->n_columnas = m.n_columnas; // actualizas n columnas

      for(int i=0; i<m.n_filas; i++){
        this->ptrMatriz[i] = new int [m.n_columnas];
        for(int j=0; j<m.n_columnas; j++){
          this->ptrMatriz[i][j] = m.ptrMatriz[i][j];
        }
      }
    }

    ~Matriz(){
      for(int i=0; i<this->n_filas; i++){
        delete []this->ptrMatriz[i];
      }
      delete []this->ptrMatriz;
      this->n_filas = 0;
      this->n_columnas = 0;
    }

    friend ostream & operator << (ostream &os, Matriz &m){
      os << endl;
      for(int i = 0; i < m.n_filas; i++){
        for(int j = 0; j < m.n_columnas; j++){

          os << "Matriz [ " << i << " ] " << "[ " << j << " ]: " << m.ptrMatriz[i][j] << endl;
        }
      }
      return os;
    }
};

int main(){
  Matriz m2(3,3,9);
  Matriz m1(m2);
  cout << m2;
  cout << m1;

}
