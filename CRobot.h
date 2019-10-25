#ifndef PROYECTOC___CROBOT_H
#define PROYECTOC___CROBOT_H

#include "funciones.h"
class CRobot {
private:
    positivo numero;
    vector<positivo> origen;
    vector<positivo> destino;
    texto producto;
    texto operacion;


public:
    CRobot();
    CRobot(positivo numero, vector<positivo> origen, vector<positivo> destino, texto producto, texto oprecion);
    CRobot(CRobot &robot);
    normal ingresar();
    normal retirar();
    positivo get_numero(){return numero;};
    vector<positivo> get_origen(){return origen;};
    vector<positivo> get_destino(){return destino;};
    texto get_producto(){return producto;};
    texto get_operacion(){ return operacion;};

};


#endif //PROYECTOC___CROBOT_H
