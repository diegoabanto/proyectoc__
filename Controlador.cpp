#include "Controlador.h"

normal Controlador::input_robots(istream &in, ostream& os){
    entero n;
    os << "Numero de robots: ";
    in >> n;

    for (entero i=0; i<n; i++){
        // Declarar variables a utilizar
        entero origen1, origen2;

        // Pedir datos
        os << "Origen del robot: " << i << " (fila columna): ";
        in >> origen1 >> origen2;

        // Agregar robot
        Robot robot(i, origen1, origen2, &almacen);
        robots.push_back(robot);
    }
}

normal Controlador::input_instrucciones(istream &in, ostream& out){
    entero n;
    out << endl << "Numero de instrucciones: ";
    in >> n;

    for (entero i=0; i<n; i++){
        // Declarar variables a utilizar
        entero num_robot, destino_fila, destino_col, cantidad;
        texto operacion, producto;

        out << endl << "Instruccion: " << i << endl;

        // Pedir datos
        out << "Numero de robot: ";
        in >> num_robot;
        out << "Operacion: ";
        in >> operacion;
        out << "Destino (fila columna): ";
        in >> destino_fila >> destino_col;
        out << "Producto (tipo): ";
        in >> producto;
        out << "Producto (cantidad): ";
        in >> cantidad;

        Instruccion instruccion(i, operacion, destino_fila, destino_col, producto, cantidad);
        robots[num_robot].agregarInstruccion(instruccion);
    }
}

normal Controlador::ejecutar_instrucciones(){
    booleano instCompletadas;
    do{
        instCompletadas = true;
        for (entero i=0; i<robots.size(); i++){
            instCompletadas = instCompletadas && robots[i].siguienteInstruccion();
        }
    } while (!instCompletadas);
}