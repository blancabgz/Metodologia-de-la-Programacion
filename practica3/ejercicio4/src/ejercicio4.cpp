#include <iostream>
#include <cmath>
#include "lista.h"
#include "utilidades.h"
using namespace std;

int main(){
  Lista lista;
  Lista *lis = &lista;
  Celda *cel;
  int num, eliminar, inser_ini, busca1, busca2, busca3, posFinal;
  eliminar = 3;
  inser_ini = 0;
  busca1 = 3;
  busca2 = 0;



  cout << "Introduce el numero de elementos de la lista ";
  cin >> num;
  pedirValores(num,lis);
  cout << "Lista inicial: " << endl;
  lista.mostrar();
  cout << "Lista con longitud " <<  lista.obtenerLongitud() << endl;
  if(lista.obtenerLongitud() > eliminar){
    for(int i = 0; i < eliminar; i++){
      lista.eliminarFinal();
    }
    cout << "Lista tras liberar 3 elementos del final : " << endl;
    lista.mostrar();
    cout << "Lista con longitud " <<  lista.obtenerLongitud() << endl;
  }else{
    cout << "No hay elementos para eliminar" << endl;
  }

  lista.agregarInicio(inser_ini);
  cout << "Lista tras insertar " << inser_ini << " al inicio : " << endl;
  lista.mostrar();
  cout << "Lista con longitud " <<  lista.obtenerLongitud() << endl;
  if(busca1 < lista.obtenerLongitud()){
    cel = lista.obtener(busca1);
    cout << "Elemento en posicion " << busca1 << " es " << cel->getValor() << endl;
  }else{
    cout << "No hay valor en la posicion " << busca1 << endl;
  }

  if(busca2 < lista.obtenerLongitud()){
    cel = lista.obtener(busca2);
    cout << "Elemento en posicion inicial es " << cel->getValor() << endl;
  }else{
    cout << "No hay valor en la posicion inicial" << endl;
  }

  busca3 = lista.obtenerLongitud();
  posFinal = busca3 - 1;
  cel = lista.obtener(posFinal);
  cout << "Elemento en posicion final es " << cel->getValor() << endl;

}
