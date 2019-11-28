#include "Controlador.h"
//ESCRITURA DE ARCHIVOS
#include <iostream>
#include <fstream>

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

normal Controlador::input_instrucciones(){
    int n;
    cout << endl << "Numero de instrucciones: ";
    cin >> n;
    ofstream archivo_escribir;

    archivo_escribir.open("prueba.txt");
    for (int i=0; i<n; i++){
        // Declarar variables a utilizar
        int num_robot, destino_fila, destino_col, cantidad;
        string operacion, producto;

        cout << endl << "Instruccion #" << i << endl;

        // Pedir datos
        cout << "Numero de robot: ";
        cin >> num_robot;
        cout << "Operacion: ";
        cin >> operacion;
        cout << "Destino (fila columna): ";
        cin >> destino_fila >> destino_col;
        cout << "Producto (tipo): ";
        cin >> producto;
        cout << "Producto (cantidad): ";
        cin >> cantidad;
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
            instCompletadas = instCompletadas && robots[i].siguienteInstruccion();
        }
    } while (!instCompletadas);

}
