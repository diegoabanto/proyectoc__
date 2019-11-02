#include "CSlot.h"
normal CSlot::definir_slot(CProducto &product, positivo cant, positivo cantmax, vector<positivo> pos, positivo fil, positivo col) { //se definen atributos
    if( pos[0] < fil && pos[1] < col){
        posicion = pos;
        objeto_almacenado = product;
        cantidad = cant;
        aforo_maximo = cantmax;
    }
}

positivo CSlot::actualizar_cantidad(estado state) {
    if(cantidad < aforo_maximo && state != 0){
        cantidad += 1;
    }
    else if(cantidad > 0 && state == 0){
        cantidad -= 1;
    }
    return cantidad;
}
