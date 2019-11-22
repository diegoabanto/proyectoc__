#ifndef PROYECTOC___CROBOT_H
#define PROYECTOC___CROBOT_H

#include "funciones.h"
#include "CInstruccion.h"

class CRobot {
private:
    positivo numero;
    vector<positivo> origen;
    texto operacion;
    texto productos;
    CSlot slot_llegada;
    CAlmacen almacen;

public:
    CRobot(positivo& numero){ this numero->numero;};
    CRobot(vector<positivo> &begin){ origen = begin;};

    /* normal MoverseVerticalmenteArriba(CSlot m_slot_llegada, CAlmacen m_almacen, CSlot);
    normal MoverseVerticalmenteAbajo(CSlot m_slot_llegada, CAlmacen m_almacen, CSlot);
    normal MoverseHorizontalmenteIzquierda(CSlot m_slot_llegada, CAlmacen m_almacen, CSlot);
    normal MoverseHorizontalmenteDerecha(CSlot m_slot_llegada, CAlmacen m_almacen, CSlot);
    normal IngresarProducto();
    normal RecogerProducto(CSlot m_slot_llegada, CAlmacen m_almacen, CSlot);
    normal RegresarHome(CSlot m_slot_llegada, CAlmacen m_almacen, CSlot); */
    positivo get_numero(){
      return numero;};

    vector<positivo> get_origen(){
      return origen;};

    texto get_operacion(){
        return operacion;};
    texto get_productos(){
        return productos;};
};


#endif //PROYECTOC___CROBOT_H

