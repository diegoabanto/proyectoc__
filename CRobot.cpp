  
 
#include "CRobot.h"
#include "CSlot.h"

CRobot::CRobot(positivo& num) {
    numero = num;

}

CRobot::CRobot(vector<positivo> &begin) {
    origen = begin;
}

normal CRobot::MoverseVerticalmenteArriba(CSlot m_slot_llegada, CAlmacen m_almacen, CSlot){


}

normal CRobot::MoverseVerticalmenteAbajo(CSlot m_slot_llegada, CAlmacen m_almacen, CSlot){
    slot_llegada=m_slot_llegada;
    almacen = m_almacen;
}

normal CRobot::MoverseHorizontalmenteDerecha(CSlot m_slot_llegada, CAlmacen m_almacen, CSlot){
    slot_llegada=m_slot_llegada;
    almacen=m_almacen;
}

normal CRobot::MoverseHorizontalmenteIzquierda(CSlot m_slot_llegada, CAlmacen m_almacen, CSlot){
  slot_llegada=m_slot_llegada;
  almacen=m_almacen;
}

normal CRobot::IngresarProducto() {
}

normal CRobot::RecogerProducto(CSlot m_slot_llegada, CAlmacen m_almacen, CSlot) {
    slot_llegada=m_slot_llegada;
    almacen=m_almacen;
}

normal CRobot::RegresarHome(CSlot m_slot_llegada, CAlmacen m_almacen, CSlot) {
    slot_llegada=m_slot_llegada;
    almacen=m_almacen;
}
