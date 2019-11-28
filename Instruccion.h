#ifndef PROYECTOC___INSTRUCCION_H
#define PROYECTOC___INSTRUCCION_H

#include "funciones.h"

class Instruccion{
public:
    entero numero;
    texto operacion;
    entero destino[2];
    texto producto;
    entero cantidad;

    Instruccion(entero _numero, texto &_operacion, entero coord1_dest, entero coord2_dest, texto &producto, entero _cantidad);
};



#endif //PROYECTOC___INSTRUCCION_H
