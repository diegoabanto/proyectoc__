#ifndef PROYECTOC___CINSTRUCCION_H
#define PROYECTOC___CINSTRUCCION_H

#include "funciones.h"
#include "CAlmacen.h"
#include "CProducto.h"
#include "CSlot.h"
class CInstruccion {
private:
    texto operacion;
    CProducto producto_instruccion; //relación composicion
    vector<positivo> destino;//relación composicion
    positivo numero_robot;
public:
    normal set_cinstruccion(texto &ope, texto &product, vector<positivo> &dest,positivo &nume_rob, positivo &fil, positivo &col, CAlmacen almacen);
    estado validar_instruccion(CSlot slot_llegada);
    vector<vector<positivo>> elegir_ruta();
};


#endif //PROYECTOC___CINSTRUCCION_H
