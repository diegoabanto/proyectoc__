#ifndef PROYECTOC___INSTRUCCION_H
#define PROYECTOC___INSTRUCCION_H

#include "funciones.h"

class Instruccion{
public:
    entero numero; //numero de instruccion
    texto operacion; //operacion a realizar
    entero destino[2]; //array de tamaño 2
    texto producto; //producto a recoger o dejar
    entero cantidad; // cantidad del producto a recoger o dejar

    //constructor
    Instruccion(entero _numero, texto &_operacion, entero coord1_dest, entero coord2_dest, texto &producto, entero _cantidad);
};



#endif //PROYECTOC___INSTRUCCION_H
