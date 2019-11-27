#ifndef PROYECTOC___INSTRUCCION_H
#define PROYECTOC___INSTRUCCION_H

#include "funciones.h"

class Instruccion{
public:
    entero numero;
    string operacion;
    entero destino[2];
    string producto;
    entero cantidad;

    Instruccion(entero _numero, string &_operacion, entero coord1_dest, entero coord2_dest, string &producto, entero _cantidad);
};



#endif //PROYECTOC___INSTRUCCION_H
