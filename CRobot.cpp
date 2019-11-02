#include "CRobot.h"
CRobot::CRobot(positivo& num, vector<positivo> &begin){
    numero = num ;
    origen = begin ;
}

normal CRobot::MoverseVerticalmenteArriba(CSlot slot_llegada, CAlmacen almacen, CSlot) {
    vector<vector<positivo>> matriz = almacen.creacion_matriz();
    vector<positivo> ultima_posicion;
    if(origen[1] <= slot_llegada.get_posicion()[1]){
        // (0,0) -> (0,5) example
        for(range i = origen[1]+1; i <= slot_llegada.get_posicion()[1]; i++){
            vector <positivo> moverse = {origen[1], i};
            if(CSlot(moverse).get_presenta_robot() != 0){
                ultima_posicion = {origen[1], i-1};
                break;
            }
        }
    }
}





