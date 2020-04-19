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
  int num, eliminar, inser_ini, busca1, busca2, busca3, posFinal, inser_fin,posElem;
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
  cout << endl;

  // mostrar la longitud de la lista
  cout << "Lista con longitud " <<  lista.obtenerLongitud() << endl;

  // si el elemento que se quiere eliminar es mayor que la longitud da error
  cout << "Introduce el numero de elementos que quieres eliminar del final: ";
  cin >> eliminar;
  if(eliminar > lista.obtenerLongitud() || eliminar < 0){
    cout << "No puedes eliminar esa cantidad de elementos" << endl;
  }else{
    for(int i = 0; i < eliminar; i++){
      lista.eliminarFinal();
    }
    cout << "Lista tras liberar " << eliminar << " elementos del final : " << endl;
    lista.mostrar(mostrar);
    cout << "Lista con longitud " << lista.obtenerLongitud() << endl;

  }

  // añadir un elemento al inicio de la lista
  cout << "Introduce un elemento al inicio de la lista: ";
  cin >> inser_ini;
  lista.agregarInicio(inser_ini);
  cout << "Lista tras insertar " << inser_ini << " al inicio : " << endl;
  lista.mostrar(mostrar);
  cout << "Lista con longitud " <<  lista.obtenerLongitud() << endl;


  // añadir un elemento al final de la Lista
  cout << "Introduce un elemento al final de la lista: ";
  cin >> inser_fin;
  lista.agregarFinal(inser_fin);
  cout << "Lista tras insertar " << inser_fin << " al final : " << endl;
  lista.mostrar(mostrar);
  cout << "Lista con longitud " <<  lista.obtenerLongitud() << endl;

  // añadir un elemento en la posicion que se pida
  cout << "Introduce la posicion en la que quieres insertar un elemento: ";
  cin >> posElem;
  cout << "Introduce un valor para meter en la posicion " << posElem << ": ";
  cin >> num;

 //////////////////////////////////////////////////////////////////////////
 // Controlo en el primer if que la posicion no sea negativa
 // Controlo en el segundo if que si la posicion es mayor que la
 // longitud de la lista, meta un 0 hasta llegar a la posicion introducida
 // por el usuario donde mete el numero obtenido por teclado
 // Controlo en el else cualquiera de los otros casos que se van fuera
 // de la longitud de la cadena.
 //////////////////////////////////////////////////////////////////////////

  if(posElem < 0){
    cout << "La posicion no es correcta " << endl;
  }else if(posElem > lista.obtenerLongitud()){
    for(int i=lista.obtenerLongitud(); i<posElem; i++){
      lista.agregarPosicion(i,0);
    }
    lista.agregarPosicion(posElem,num);
    lista.mostrar(mostrar);
  }else{
    cout << "entro en el else" << endl;
    lista.agregarPosicion(posElem,num);
    lista.mostrar(mostrar);
  }

  // obtener un elemento de la lista.
  cout << "Introduce la posicion a buscar:";
  cin >> busca1;
  if(busca1 > lista.obtenerLongitud() || busca1 < 0){
    cout << "No puedes buscar un valor en la posicion " << busca1 << endl;
  }else{
    cel = lista.obtener(busca1);
    cout << "Elemento en posicion " << busca1 << " es " << cel->getValor() << endl;

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



  // Al final del programa libero liberar
  lista.liberarEspacio();

}
