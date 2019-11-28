#ifndef PROYECTOC___ALMACEN_H
#define PROYECTOC___ALMACEN_H


#include "Instruccion.h"
#include "Slot.h"
#include"funciones.h"
using namespace std;

// Dimensiones del almacen
const entero f = 5;
const entero c = 5;

class Almacen{
private:
    Slot slots[f][c];
    entero posRobots[f][c]; // Posiciones de los robots
    entero filas = f;
    entero columnas = c;

public:
    Almacen();
    ~Almacen() = default;

    entero getFilas();
    entero getColumnas();

    normal ingresarProducto(entero coord1, entero coord2, texto &_producto, entero cantidad);
    normal retirarProducto(entero coord1, entero coord2, entero cantidad);

    normal marcarRobot(entero num_robot, entero coord1, entero coord2);
    normal desmarcarRobot(entero coord1, entero coord2);
};




#endif //PROYECTOC___ALMACEN_H
