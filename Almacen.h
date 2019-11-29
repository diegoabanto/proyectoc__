#ifndef PROYECTOC___ALMACEN_H
#define PROYECTOC___ALMACEN_H


#include "Instruccion.h"
#include "Slot.h"
#include"funciones.h"
using namespace std;

// Dimensiones del almacen ya definidas
const entero f = 5; //numero de filas
const entero c = 5; //numero de columnas

class Almacen{
private:
    Slot slots[f][c]; // creacion de matriz de slots [filas], [columnas]
    entero posRobots[f][c]; // Posiciones de los robots
    entero filas;
    entero columnas;

public:
    Almacen(); //constructor
    ~Almacen() = default; // destructor por defecto

    normal setfilas_columnas(); //se establece el tamaño de filas y columnas

    //metodos de obtencion de datos
    entero getFilas(){ return filas;}; //retorna las filas
    entero getColumnas(){ return columnas;}; //retorna las columnas

    //metodos de acceso
    normal ingresarProducto(entero coord1, entero coord2, texto &_producto, entero cantidad);
    normal retirarProducto(entero coord1, entero coord2, entero cantidad);

    normal marcarRobot(entero num_robot, entero coord1, entero coord2);
    normal desmarcarRobot(entero coord1, entero coord2);
};




#endif //PROYECTOC___ALMACEN_H
