#include "CRobot.h"
#include "funciones.h"

CRobot::CRobot() {
}

CRobot::CRobot(positivo num, vector<positivo> begin, vector<positivo> finish, texto product, texto operation) {
  
    numero = num ;
    origen = begin ;
    destino = finish ;
    producto = product ;
    operacion = operation ;
}

CRobot::CRobot(CRobot &robot) {
    numero = robot.numero;
    origen = robot.origen;
    destino = robot.destino;
    producto = robot.producto;
    operacion = robot.operacion;

}

normal CRobot::ejercutarRuta() {
  
}

normal CRobot::MoverseVerticalmente() {
 

}

normal CRobot::MoverseHorizontalmente(){

}

normal CRobot::LlevarProducto(){

}

normal CRobot::RegresarHome(){

}




