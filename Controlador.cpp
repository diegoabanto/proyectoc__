#include "Controlador.h"
//ESCRITURA DE ARCHIVOS
//Creamo y leemos el archivo


normal Controlador::input_robots(istream &in, ostream& os){
    int n;
    os << "Numero de robots: ";
    in >> n;

    for (int i=0; i<n; i++){
        // Declarar variables a utilizar
        int origen1, origen2;

        // Pedir datos
        os << "Origen del robot: " << i << " (fila columna): ";
        in >> origen1 >> origen2;

        // Agregar robot
        Robot robot(i, origen1, origen2, &almacen);
        robots.push_back(robot);
    }
}

normal Controlador::input_instrucciones(std::istream &in, std::ostream& out){
    int n;
    out << endl << "Numero de instrucciones: ";
    in >> n;
    ofstream archivo_escribir;
    //Se tiene que especificar la ruta exacta
    archivo_escribir.open("C://Users/Lucero Navarro/Documents/GitHub/proyectoc__/prueba.txt");
    for (int i=0; i<n; i++){
        // Declarar variables a utilizar
        int num_robot, destino_fila, destino_col, cantidad;
        string operacion, producto;

        out << endl << "Instruccion #" << i << endl;

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
        archivo_escribir<<"El robot: "<<num_robot+1<<" se dirige a la posicion :\n";
        archivo_escribir<<"Fila : "<< destino_fila<<"\n"<<"Columna : "<< destino_col<<"\n";
        archivo_escribir<<"Accion: "<< operacion<< " de "<< cantidad << " "<<producto<< "\n";
        Instruccion instruccion(i, operacion, destino_fila, destino_col, producto, cantidad);
        robots[num_robot].agregarInstruccion(instruccion);
    }
    archivo_escribir.close();
}

normal Controlador::ejecutar_instrucciones(){

    bool instCompletadas;
    do{
        instCompletadas = true;
        for (int i=0; i<robots.size(); i++){
            instCompletadas = instCompletadas && robots[i].siguienteInstruccion( cin,cout);
        }
    } while (!instCompletadas);

}
