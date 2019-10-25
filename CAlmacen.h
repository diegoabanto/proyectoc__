//
// Created by Asus on 22/10/2019.
//

#ifndef PROYECTOC___CALMACEN_H
#define PROYECTOC___CALMACEN_H

#include "funciones.h"
class CAlmacen {
private:
    positivo filas, columnas;
    string producto_almacenado;
    positivo cantidad_producto;
public:
    CAlmacen();
    CAlmacen(positivo filas, positivo columnas, string producto_almacenado, positivo cantidad_producto);
    positivo get_filas(){return filas;};
    positivo get_columnas(){return columnas;};
    string get_producto_almacenado(){ return producto_almacenado;};
    positivo get_cantidad_producto(){ return cantidad_producto;};

};


#endif //PROYECTOC___CALMACEN_H
