#ifndef PROYECTOC___CROBOT_H
#define PROYECTOC___CROBOT_H

#include "funciones.h"
#include "CInstruccion.h"

class CRobot {
private:
    positivo numero;
    vector<positivo> origen;
public:
    CRobot(positivo& numero);
    CRobot(vector<positivo> &begin);
    normal MoverseVerticalmenteArriba(CSlot slot_llegada, CAlmacen almacen, CSlot);
    normal MoverseVerticalmenteAbajo();
    normal MoverseHorizontalmenteIzquierda();
    normal MoverseHorizontalmenteDerecha();
    normal IngresarProducto();
    normal RecogerProducto();
    normal RegresarHome();
    positivo get_numero(){
      return numero;};
    vector<positivo> get_origen(){
      return origen;};
};
class CPersona{
private:
    string sexo;
public:
    CPersona(string x);
protected:
    string nombre;
    int edad;
};
class hijo: public CPersona{
private:
    string codigo;
public:
    hijo(string sdsds);
};

#endif //PROYECTOC___CROBOT_H
