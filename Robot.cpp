#include "Robot.h"
#include "funciones.h"
Robot::Robot(entero _numero, entero _origen1, entero _origen2, Almacen* _almacen){
    numero = _numero;
    origen[0] = _origen1;
    origen[1] = _origen2;
    coordActual[0] = _origen1;
    coordActual[1] = _origen2;
    almacen = _almacen;

    almacen->marcarRobot(_numero, _origen1, _origen2);
}

normal Robot::agregarInstruccion(Instruccion instruccion){
    instrucciones.push_back(instruccion);
}

// Movimiento
bool Robot::moverse(int dest1, int dest2){ // y x
    almacen->desmarcarRobot(coordActual[0], coordActual[1]); // borrar la marca actual porque se actualizara despues

    coordActual[0] = dest1;
    coordActual[1] = dest2;
    almacen->marcarRobot(numero, dest1, dest2);

    return true;
}

bool Robot::siguienteInstruccion(){
    if (termino()){
        return true;
    }

    string operacionIns = instrucciones[proximaInstruccion].operacion;
    int destinoIns[2] = {
            instrucciones[proximaInstruccion].destino[0],
            instrucciones[proximaInstruccion].destino[1]
    };
    string productoIns = instrucciones[proximaInstruccion].producto;
    int productoCant = instrucciones[proximaInstruccion].cantidad;


    // volver al origen si hay algun paquete que dejar
    if (operacionIns=="ingreso"){
        estado = "en transito";
        moverse(origen[0], origen[1]);
    }

    // ir al destino
    moverse(destinoIns[0], destinoIns[1]);
    estado = "destino";

    if (operacionIns=="ingreso") {
        estado = "en transito";
        // actualizar almacen, el producto se ha dejado ahi
        almacen->ingresarProducto(destinoIns[0], destinoIns[1], productoIns, productoCant);
    }
    else{
        // actualizar almacen, el producto ya no esta ahi
        almacen->retirarProducto(destinoIns[0], destinoIns[1], productoCant);
    }

    // volver al origen si hay algun paquete que entregar
    if (operacionIns=="retiro"){
        estado = "en transito";
        moverse(origen[0], origen[1]);
    }

    cout << "Se ejecuto la instruccion #" << instrucciones[proximaInstruccion].numero << endl;
    proximaInstruccion++;

    if (termino()){ // volver a home
        cout << "Robot volviendo a home" << endl;
        moverse(origen[0], origen[1]);
        estado = "home";
    }
    return false; // Aun no termina todas sus instrucciones
}


bool Robot::termino(){
    return instrucciones.empty() || proximaInstruccion >= instrucciones.size();
}
