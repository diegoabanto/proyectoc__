//
// Created by Asus on 22/10/2019.
//

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
    positivo get_numero_robots(){return numero_robots;};
};


#endif //PROYECTOC___CALMACEN_H
