#include "Controlador.h"

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

        Instruccion instruccion(i, operacion, destino_fila, destino_col, producto, cantidad);
        robots[num_robot].agregarInstruccion(instruccion);
    }
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