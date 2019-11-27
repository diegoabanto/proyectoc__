#include "Almacen.h"

// Constructor
Almacen::Almacen(){
    // Iniciar con un almacen vacio
    for(int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            Slot slot;
            slots[i][j] = slot;
        }
    }

    // Iniciar sin ningun robot
    for(int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            posRobots[i][j] = -1;
        }
    }
}

// Metodos de acceso
int Almacen::getFilas(){
    return filas;
}

int Almacen::getColumnas(){
    return columnas;
}

// Modificar slots
normal Almacen::ingresarProducto(int coord1, int coord2, string producto, int cantidad){
    slots[coord1][coord2].producto = producto;
    slots[coord1][coord2].cantidad += cantidad;
}

normal Almacen::retirarProducto(int coord1, int coord2, int cantidad){
    slots[coord1][coord2].cantidad -= cantidad;
    if (slots[coord1][coord2].cantidad==0) {slots[coord1][coord2].producto = "";}
}


// Estado de robots
normal Almacen::marcarRobot(int num_robot, int coord1, int coord2){
    posRobots[coord1][coord2] = num_robot;
}

normal Almacen::desmarcarRobot(int coord1, int coord2){
    posRobots[coord1][coord2] = -1;
}