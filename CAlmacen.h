#ifndef PROYECTOC___CALMACEN_H
#define PROYECTOC___CALMACEN_H

#include "funciones.h"
class CAlmacen {
private:
    positivo filas, columnas, numero_robots;
public:
    CAlmacen(positivo& fil, positivo& col, positivo& n_robots);
    positivo get_filas(){ return filas;};
    vector<vector<positivo>> creacion_matriz();
    //Intentar setear la matriz con un array de arrays
    positivo get_numero_robots(){return numero_robots;};
    bool slot_empty();
};


#endif //PROYECTOC___CALMACEN_H
