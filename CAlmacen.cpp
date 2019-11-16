#include "CAlmacen.h"
#include "funciones.h"

CAlmacen::CAlmacen(positivo& fil, positivo& col, positivo& n_robots): filas{fil},columnas{col}, numero_robots{n_robots}{
}

vector<vector<positivo>> CAlmacen::creacion_matriz() {
    vector<vector<positivo>> matriz(filas);
    for(range i = 0 ; i < matriz.size()-1; i++){
        matriz[i] = vector<positivo>(columnas);
    }
    return matriz;
    //Probar
}

bool CAlmacen::slot_empty() {
    auto matriznueva = creacion_matriz();
    for(auto it = matriznueva.begin(); it!= matriznueva.end();it++ ){
        if((it)->empty()){
            return true;
        }
        else return false;
    }
}







