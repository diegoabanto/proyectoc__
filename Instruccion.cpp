#include "Instruccion.h"
//definicion del constructor
Instruccion::Instruccion(entero _numero, texto &_operacion, entero coord1_dest, entero coord2_dest, texto &_producto, entero _cantidad){
    numero = _numero;
    operacion = _operacion;
    destino[0] = coord1_dest; //coordenada x es el elemento 0 del array
    destino[1] = coord2_dest; //coordenada y es el elemento 1 del array
    producto = _producto;
    cantidad = _cantidad;
}
