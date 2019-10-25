#include "CAlmacen.h"
#include "funciones.h"

CAlmacen::CAlmacen(){
    filas = 0;
    columnas = 0;
    cantidad_producto = 0;
}

CAlmacen::CAlmacen(positivo rows, positivo columns, string stored_product, positivo amount_product){
    filas = rows;
    columnas = columns;
    cantidad_producto = amount_product;
    producto_almacenado = stored_product;
}
