/**
BLANCA ABRIL GONZÁLEZ GRUPO E3
PASO 1

*  Un ejemplo de ejecución podria ser:
*  Introduzca un circulo en formato radio-(x,y): 3-(0,0)
*  Introduzca otro circulo: 4-(4,0)
*  El círculo que pasa por los dos centros es: 2-(2,0)

Compilar: g++ -o circuloMedio circuloMedio.cpp
Ejecutar: ./circuloMedio

**/

#include <iostream>
#include <cmath>
using namespace std;

// Declaracion de la clase punto

class Punto {
private:
    double x; // coordenada x
    double y; // coordenada y

public:
    // constructor por defecto: valor 0 a las coordenadas
    Punto() {
      x = 0;
      y = 0;
    }

    //Constructor que permite asignar valor a los datos miembro.
    Punto(double vx, double vy) {
        x = vx;
        y = vy;
    }

    // acceso al dato x
    double getX() const {
        return x;
    }

    // acceso al dato y

    double getY() const {
        return y;
    }

    // metodo para asignar valor al dato miembro x
    void setX(double vx) {
        x = vx;
    }

    // metodo para asignar valor al dato miembro y
    void setY(double vy) {
        y = vy;
    }

    // muestra el contenido del objeto por pantalla. Fuera de la clase.
    void mostrar() const;

    // preguntar los valores de los datos miembro al usuario
    void leerDatos();
};

// muestra el contenido por pantalla
void Punto::mostrar() const {
  cout << "El valor del punto X es " << x << endl;
  cout << "El valor del punto Y es " << y << endl;
}

// método preguntar los valores de los datos miembro al usuario
void Punto::leerDatos(){
    // Se leen los datos del usaurio
    cout << "Introduzca punto X: ";
    cin >> x;
    cout << "Introduzca punto Y: ";
    cin >> y;
}

/**
 * @brief Calcula la distancia entre dos puntos. Se trata de
 * una funcion externa a la clase Punto. A implementar
 * @param p1 primer punto
 * @param p2 segundo punto
 * @return la distancia entre el punto @a p1 y el punto @a p2
 */
double calcularDistancia(Punto p1, Punto p2) {
    double distancia_entre_puntos;
    distancia_entre_puntos = sqrt(pow((p2.getX()- p1.getX()),2) + pow((p2.getY() - p1.getY()),2));
    return distancia_entre_puntos;
}

/**
 * @brief Calcula el punto que está entre dos puntos dados con distancia
 * mínima a ambos. Se trata de una funcion externa a la clase Punto. A
 * implementar
 * @param p1 primer punto
 * @param p2 segundo punto
 * @return un punto entre el punto @a p1 y el punto @a p2 con distancia
 * mínima a ambos
 */
Punto calcularPuntoMedio(Punto p1, Punto p2) {
    double puntomedio1, puntomedio2;
    puntomedio1 = (p1.getX()+p2.getX())/2;
    puntomedio2 = (p1.getY()+p2.getY())/2;

    Punto puntomedio(puntomedio1,puntomedio2);
    return puntomedio;
}

// Declaración de la clase circulo

class Circulo {

private:
    Punto centro; // centro del circulo
    double radio; // radio del circulo
public:
    // constructor por defecto. Asigna 0 a todos los datos miembro.
    Circulo() {
      centro.setX(0);
      centro.setY(0);
      radio = 0;
    }
    // constructor que permite asignar valor a los datos miembro del objeto.

    Circulo(Punto vcentro, double vradio) {
      centro = vcentro;
      radio = vradio;
    }

     // Metodo para acceder al valor del dato miembro centro.

    Punto getCentro() const {
      return centro;
    }

     // Metodo para acceder al valor del dato miembro radio

    double getRadio() const {
        return radio;
    }

    /**
     * Metodo para asignar el valor del dato miembro centro. A
     * implementar
     * @param puntoCentro
     */
    void setCentro(Punto puntoCentro){
        centro = puntoCentro;
    }

    /**
     * Metodo para asignar el valor del radio. A implementar
     * @param valorRadio
     */
    void setRadio(double valorRadio){
        radio = valorRadio;
    }

    /**
     * Metodo para mostrar por pantalla los datos de un objeto.
     * A implementar fuera del cuerpo de la clase
     */
    void mostrar() const;

    /**
     * Metodo para preguntar los valores de los datos miembro al
     * usuario. Por implementar, fuera del ambito de la clase
     */
    void leerDatos();

    /**
     * Metodo para calcular el area de un objeto. A implementar
     * fuera del cuerpo de la clase
     * @return
     */
    double calcularArea() const;
};

/**
 * Metodo para mostrar por pantalla los datos de un objeto.
 */
void Circulo::mostrar() const {

    // Formato de escritura del círculo: radio - (x,y)
    cout << radio <<  " - (" << centro.getX() << "," << centro.getY() << ")" << endl;
}

/**
 * Metodo para preguntar los valores de los datos miembro al
 * usuario. Por implementar (se recomienda leer el radio y
 * delegar en la clase Punto la lectura del punto que hace de
 * centro)
 */
void Circulo::leerDatos(){
    double puntox, puntoy,radiocirculo;
    cout << "Intruduce el radio del circulo : ";
    cin >> radiocirculo;
    setRadio(radiocirculo); // establecer valor del radio
    Punto puntocentral;
    puntocentral.leerDatos(); // leer los datos con el método perteneciente a la clase punto
    setCentro(puntocentral);

}

/**
 * Metodo para calcular el area de un circulo
 * @return
 */
double Circulo::calcularArea() const {
    // Se calcula el area
    double area=2*M_PI*pow(radio,2);
    // Se devuelve el resultado
    return area;
}

/**
 * @brief Calcula la distancia entre dos circulos. Funcion externa a
 * ambas clases
 * @param c1 primer círculo
 * @param c2 segundo círculo
 * @return la distancia entre el círculo @a c1 y el círculo @a c2
 * La distancia entre dos círculos se define como la distancia entre los
 * centros menos los dos radios.
 * Nótese que la distancia puede ser negativa si los círculos se intersecan
 */
double calcularDistancia(Circulo c1, Circulo c2) {
    // Se recuperan los centros de ambos circulos
    Punto cc1=c1.getCentro();
    Punto cc2=c2.getCentro();

    // Se calcula la distancia entre los dos puntos
    double distancia=calcularDistancia(cc1, cc2);

    // Se devuelve el valor calculado
    return distancia;
}

/**
 * @brief Comprueba si un punto es interior a un círculo. FUncion externa
 * a las clases
 * @param p punto a comprobar
 * @param c circulo
 * @retval true si el punto @a p es interior al círculo @a c
 * @retval false en caso contrario
 */
bool comprobarInterior(Punto p, Circulo c) {
    bool interior=false;

    // Se calcula si la distancia entre el punto y el centro
    // del circulo es menor que el radio del circulo
    Punto cc=c.getCentro();
    double radio=c.getRadio();

    // Se calcula la distancia
    double distancia=calcularDistancia(p, cc);

    // Si es interior, se cambia el valor del flag
    if(distancia <= radio){
        interior=true;
    }

    // Se devuelve el valor de interior
    return interior;
}

/**
 * Programa principal para probar el codigo
 * @return
 */
int main() {
    Circulo c1, c2;

    do {
        // Se leen los datos del circulo 1
        c1.leerDatos();

        // Igual con el circulo 2
        c2.leerDatos();
    } while (calcularDistancia(c1.getCentro(), c2.getCentro()) == 0);

    // Se calcula la el punto medio de los dos centros
    Punto puntoMedio=calcularPuntoMedio(c1.getCentro(), c2.getCentro());

    // Se crea objeto de la clase circulo a partir de los
    // datos
    Circulo c3(puntoMedio, calcularDistancia(c1.getCentro(), c2.getCentro()) / 2);

    // Se muestra el resultado por pantalla
    cout << "El círculo que pasa por los dos centros es: ";
    c3.mostrar();
    cout << endl;
}
