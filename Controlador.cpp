#include "Controlador.h"
//ESCRITURA DE ARCHIVOS

//Creamos y leemos el archivo


normal Controlador::input_robots(istream &in, ostream& os){
    entero n; //numero de robots
    os << "Numero de robots: ";
    in >> n;

    for (entero i=0; i<n; i++){
        // coordinadas del origen del robot
        entero origen1, origen2;

        // Pedir datos
        os << "Origen del robot: " << i << " (fila,columna): ";
        in >> origen1 >> origen2;

        // Agregar robot
        Robot robot(i, origen1, origen2, &almacen);
        robots.push_back(robot);
    }
}

normal Controlador::input_instrucciones(std::istream &in, std::ostream& out){
    entero n; //numero de instrucciones
    out << endl << "Numero de instrucciones: "; in >> n;

    ofstream archivo_escribir;

    //Se tiene que especificar la ruta exacta
    archivo_escribir.open("C://Users/Lucero Navarro/Documents/GitHub/proyectoc__/prueba.txt");
    for (entero i=0; i<n; i++){
        // Declarar variables a utilizar
        entero num_robot, destino_fila, destino_col, cantidad;
        texto operacion, producto;

        out << endl << "Instruccion numero " << i << endl;

        // Pedir datos
        out << "Numero de robot: "; in >> num_robot;

        out << "Operacion: "; in >> operacion;

        out << "Destino (fila columna): "; in >> destino_fila >> destino_col;

        out << "Producto (tipo): "; in >> producto;

        out << "Producto (cantidad): "; in >> cantidad;

        archivo_escribir<<"El robot: "<<num_robot+1<<" se dirige a la posicion :\n";
        archivo_escribir<<"Fila : "<< destino_fila<<"\n"<<"Columna : "<< destino_col<<"\n";
        archivo_escribir<<"Accion: "<< operacion<< " de "<< cantidad << " "<<producto<< "\n";
        Instruccion instruccion(i, operacion, destino_fila, destino_col, producto, cantidad);
        robots[num_robot].agregarInstruccion(instruccion);
    }
    archivo_escribir.close();
}

normal Controlador::ejecutar_instrucciones(){

    booleano instCompletadas;
    do{
        instCompletadas = true;
        for (auto & robot : robots){
            instCompletadas = instCompletadas && robot.siguienteInstruccion( cin,cout);
        }
    } while (!instCompletadas);

}
