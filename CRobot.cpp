#include "CRobot.h"
#include "funciones.h"

CRobot::CRobot() {
}

CRobot::CRobot(positivo num, vector<positivo> begin, vector<positivo> finish, texto product, texto operation) {

    numero = num;
    origen = begin;
    destino = finish;
    producto = product;
    operacion = operation;
}

CRobot::CRobot(CRobot &robot) {
  
    numero = robot.numero;
    origen = robot.origen;
    destino = robot.destino;
    producto = robot.producto;
    operacion = robot.operacion;

}

normal CRobot::ejercutarRuta() {
    cout<<"falta llenar";
}

normal CRobot::MoverseVerticalmente(entero fila,entero columnas) {
    cout<<"falta llenar";
}

normal CRobot::MoverseHorizontalmente(){

}

normal CRobot::LlevarProducto(){

}

normal CRobot::RegresarHome(){

}

positivo CRobot:: get_numero(){
      return numero;}
vector<positivo> get_origen(){
      return origen;}
vector<positivo> get_destino(){
      return destino;}
texto CRobot:: get_producto(){
      return producto;}
texto CRobot:: get_operacion(){ 
      return operacion;}

