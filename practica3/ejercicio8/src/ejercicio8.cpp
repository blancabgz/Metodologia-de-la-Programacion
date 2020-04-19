#include <iostream>
#include <cmath>
#include "lista.h"
#include "utilidades.h"
#include "celda.h"
using namespace std;

int main(){
  Lista lista;
  Lista *lis = &lista;
  Celda *cel;
  Celda *mostrar;
  int num, eliminar, inser_ini, busca1, busca2, busca3, posFinal;
  eliminar = 3;
  inser_ini = 0;
  busca1;
  busca2 = 0;

  // introducir valores en la lista
  cout << "Introduce el numero de elementos de la lista ";
  cin >> num;
  pedirValores(num,lis);
  cout << endl;

  // mostrar la lista en orden
  cout << "Lista inicial: " << endl;
  lista.mostrar(mostrar);

  // mostrar la lista al contrario
  cout << "Lista inversa: " << endl;
  lista.mostrarInversa(mostrar);

  // mostrar la longitud de la lista
  cout << "Lista con longitud " <<  lista.obtenerLongitud() << endl;

  // si el elemento que se quiere eliminar es mayor que la longitud da error
  if(lista.obtenerLongitud() > eliminar){
    for(int i = 0; i < eliminar; i++){
      lista.eliminarFinal();
    }
    cout << "Lista tras liberar 3 elementos del final : " << endl;
    lista.mostrar(mostrar);
    cout << "Lista con longitud " <<  lista.obtenerLongitud() << endl;
  }else{
    cout << "No hay elementos para eliminar" << endl;
  }

  // añadir un elemento al inicio de la lista
  lista.agregarInicio(inser_ini);
  cout << "Lista tras insertar " << inser_ini << " al inicio : " << endl;
  lista.mostrar(mostrar);
  cout << "Lista con longitud " <<  lista.obtenerLongitud() << endl;

  // obtener un elemento de la lista.
  cout << "Introduce la posicion a buscar:";
  cin >> busca1;
  if(busca1 < lista.obtenerLongitud() && busca1 > 0){
    cel = lista.obtener(busca1);
    cout << "Elemento en posicion " << busca1 << " es " << cel->getValor() << endl;
  }else{
    cout << "No hay valor en la posicion " << busca1 << endl;
  }

  // obtener el primer elemento de la lista.
  if(busca2 < lista.obtenerLongitud()){
    cel = lista.obtener(busca2);
    cout << "Elemento en posicion inicial es " << cel->getValor() << endl;
  }else{
    cout << "No hay valor en la posicion inicial" << endl;
  }

  // obtener el ultimo  elemento de la lista.
  busca3 = lista.obtenerLongitud();
  posFinal = busca3 - 1;
  cel = lista.obtener(posFinal);
  cout << "Elemento en posicion final es " << cel->getValor() << endl;


}
