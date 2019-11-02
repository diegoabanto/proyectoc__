#ifndef PROYECTOC___CROBOT_H
#define PROYECTOC___CROBOT_H

#include "funciones.h"
#include "CInstruccion.h"

class CRobot {
private:
    positivo numero;
    vector<positivo> origen;
public:
    CRobot(positivo& numero, vector<positivo> &begin);
    normal ejercutarRuta();
    normal MoverseVerticalmenteArriba(CSlot slot_llegada, CAlmacen almacen, CSlot);
    normal MoverseHorizontalmente();
    normal LlevarProducto();
    normal RegresarHome();
    positivo get_numero(){
      return numero;};
    vector<positivo> get_origen(){
      return origen;};


};


#endif //PROYECTOC___CROBOT_H
