#include "Instruccion.h"

Instruccion::Instruccion(entero _numero, string &_operacion, entero coord1_dest, entero coord2_dest, string &_producto, entero _cantidad){
    numero = _numero;
    operacion = _operacion;
    destino[0] = coord1_dest;
    destino[1] = coord2_dest;
    producto = _producto;
    cantidad = _cantidad;
}

