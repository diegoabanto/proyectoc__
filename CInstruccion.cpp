#include "CInstruccion.h"

normal CInstruccion::set_cinstruccion(texto &ope, texto &product, vector<positivo> &dest, positivo &nume_rob, positivo &fil, positivo &col, CAlmacen almacen) {
    if(ope == "Ingreso" || ope == "Retiro"){
        operacion = ope;
    }
    producto_instruccion = CProducto(product);
    if(dest[0] < fil && dest[1] < col){
        destino = dest;
    }
    if(nume_rob <= almacen.get_numero_robots()){
        numero_robot = nume_rob;
    }
}

estado CInstruccion::validar_instruccion(CSlot slot_llegada){
    estado estadito = false;
    if(producto_instruccion.get_tipo_producto() ==  slot_llegada.get_productoalmacenado()){
        estadito = true;
    }
    return estadito;
}

vector<vector<positivo>> CInstruccion::elegir_ruta() {
    vector<vector<positivo>> ruta;
    return ruta;
}
