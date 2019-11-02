#include "CSlot.h"

CSlot::CSlot(vector<positivo> &pos) {
    posicion = pos;
}

normal CSlot::definir_slot(CProducto &product, positivo& cant, positivo& cantmax, estado have_robot, CRobot robot1){//se definen atributos
    objeto_almacenado = product.get_tipo_producto();
    cantidad = cant;
    aforo_maximo = cantmax;
    presenta_robot = posicion == robot1.get_origen();
}


positivo CSlot::actualizar_cantidad(estado& state) {
    if(cantidad < aforo_maximo && state != 0){
        cantidad += 1;
    }
    else if(cantidad > 0 && state == 0){
        cantidad -= 1;
    }
    return cantidad;
}
