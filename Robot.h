#ifndef PROYECTOC___ROBOT_H
#define PROYECTOC___ROBOT_H

#include "Almacen.h" // Incluye Instruccion
#include "funciones.h"

class Robot{
private:
    entero numero; //numero de robot
    entero origen[2];
    entero coordActual[2];
    texto estado; // en tránsito, destino, home
    Almacen* almacen;

    entero proximaInstruccion = 0;  // numero de siguiente instruccion a ejecutar
    vector<Instruccion> instrucciones;

    booleano moverse(entero dest1, entero dest2); // devuelve true si llego al destino y false si hubo colision.
    // actualiza la posicion del robot en el almacen
public:
    Robot(entero _numero, entero _origen1, entero _origen2, Almacen* _almacen);
    ~Robot() = default;

    normal agregarInstruccion(Instruccion instruccion);
    booleano siguienteInstruccion(istream &in, ostream& os); // devuelve false si hubo colision
                                                             // true si completo la instruccion o no tiene mas

    booleano termino();  // devuelve true si termino todas sus instrucciones o si no hay instrucciones
};
#endif //PROYECTOC___ROBOT_H
