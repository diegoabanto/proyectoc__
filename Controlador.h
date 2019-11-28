#ifndef PROYECTOC___CONTROLADOR_H
#define PROYECTOC___CONTROLADOR_H


#include "Robot.h" // Incluye Almacen e Instruccion
#include "funciones.h"
using namespace std;

class Controlador{
private:
    Almacen almacen;
    vector<Robot> robots;
public:
    normal input_robots(istream &in, ostream& os);
    normal input_instrucciones(istream &in, ostream& out);
    normal ejecutar_instrucciones();
};

#endif //PROYECTOC___CONTROLADOR_H
