#include "Almacen.h"

normal Almacen::setfilas_columnas() {
    filas = f;
    columnas = c;
}

// Constructor
Almacen::Almacen(){
    // Iniciar con un almacen vacio
    for(entero i=0; i<f; i++){
        for (entero j=0; j<c; j++){
            Slot slot;
            slots[i][j] = slot;
        }
    }

    // Iniciar sin ningun robot
    for(entero i=0; i<f; i++){
        for (entero j=0; j<c; j++){
            posRobots[i][j] = -1;
        }
    }
}


// Modificar slots
normal Almacen::ingresarProducto(entero coord1, entero coord2, texto &_producto, entero cantidad){
    slots[coord1][coord2].producto = _producto;
    slots[coord1][coord2].cantidad += cantidad;
}

normal Almacen::retirarProducto(entero coord1, entero coord2, entero cantidad){
    slots[coord1][coord2].cantidad -= cantidad;
    if (slots[coord1][coord2].cantidad == 0){
        slots[coord1][coord2].producto = "";
    }
}


// Estado de robots
normal Almacen::marcarRobot(entero num_robot, entero coord1, entero coord2){
    posRobots[coord1][coord2] = num_robot;
}

normal Almacen::desmarcarRobot(entero coord1, entero coord2){
    posRobots[coord1][coord2] = -1;
}