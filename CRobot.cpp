#include "CRobot.h"
#include "funciones.h"

CRobot::CRobot() {
    numero = 0;
    origen = {0,0};
    destino = {0,0};
}

CRobot::CRobot(positivo num, vector<positivo> begin, vector<positivo> finish, texto product, texto operation) {
    //no seria lo mismo?
    numero = num;
    origen = begin;
    destino = finish;
    producto = product;
    operacion = operation;
}

CRobot::CRobot(CRobot &robot) {
    //no seria lo mismo?
    numero = robot.numero;
    origen = robot.origen;
    destino = robot.destino;
    producto = robot.producto;
    operacion = robot.operacion;

}

normal CRobot::ingresar() {
    cout<<"falta llenar";
}

normal CRobot::retirar() {
    cout<<"falta llenar";
}
