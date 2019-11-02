  
#ifndef PROYECTOC___CSLOT_H
#define PROYECTOC___CSLOT_H

#include "CProducto.h"
#include "funciones.h"
#include "CAlmacen.h"
class CSlot {
private:
    vector<positivo> posicion;
    CProducto objeto_almacenado; //Relacion de agregacion
    positivo cantidad;
    positivo aforo_maximo;
public:
    normal definir_slot(CProducto &product, positivo& cant, positivo& cantmax, vector<positivo>& pos, positivo& fil, positivo& col);
    positivo actualizar_cantidad(estado& state);
    texto get_productoalmacenado(){ return objeto_almacenado.get_tipo_producto()};
};


#endif //PROYECTOC___CSLOT_H
