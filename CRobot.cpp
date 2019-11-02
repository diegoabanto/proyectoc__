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

normal CRobot::ejercutarRuta() {
    cout<<"falta llenar";
}

normal CRobot::MoverseVerticalmente() {
    cout<<"falta llenar";
}

normal CRobot::MoverseHorizontalmente(){

}

normal CRobot::LlevarProducto(){

}

normal CRobot::RegresarHome(){

}

positivo CRobot::get_numero(){
  return numero;
}

vector<positivo> get_origen(){
      return origen;};
vector<positivo> get_destino(){
  return destino;};
texto get_producto(){
      return producto;};
texto get_operacion(){ 
      return operacion;};
