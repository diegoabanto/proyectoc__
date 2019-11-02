  
#ifndef PROYECTOC___CSLOT_H
#define PROYECTOC___CSLOT_H

#include "CProducto.h"
#include "funciones.h"
#include "CAlmacen.h"
#include "CRobot.h"
class CSlot {
private:
    vector<positivo> posicion;
    texto objeto_almacenado; //Relacion de agregacion
    positivo cantidad;
    positivo aforo_maximo;
    estado presenta_robot;
public:
    CSlot(vector<positivo>& pos);
    normal definir_slot(CProducto &product, positivo& cant, positivo& cantmax, estado have_robot, CRobot robot1);
    positivo actualizar_cantidad(estado& state);
    texto get_productoalmacenado(){return objeto_almacenado.get_tipo_producto();};
    vector<positivo> get_posicion(){return posicion;};
    estado get_presenta_robot(){ return presenta_robot;};
};


#endif //PROYECTOC___CSLOT_H
