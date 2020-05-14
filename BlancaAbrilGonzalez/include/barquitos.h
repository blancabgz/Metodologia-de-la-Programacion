#include <iostream>

using namespace std;

class Barquitos{
    private:
      int filas; // numero de filas del tablero
      int columnas; // numero de columnas del tablero
      int value; // valor de la celda
      int **ptrTablero; // tablero


    public:
        // constructor por defecto
        Barquitos();
        // constructor por parametro
        Barquitos(int filas, int columnas, int value);
        // constructor por segmento
        Barquitos(const Barquitos &b);
        // destructor
        ~Barquitos();
        // funcion que inserta barco siempre que no este ocupado
        void insertarBarco(int fila, int columna, int value, char insertar);
        friend ostream & operator<< ( ostream & , const Barquitos &);

};
