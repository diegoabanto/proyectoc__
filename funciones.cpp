#include "funciones.h"
vector<texto> lectura() {
    texto nombre_archivo, palabra1;
    positivo contador = 0;
    vector<texto> palabra(1000);
    entrada archivo;
    //cout<<"Ingrese el nombre del archivo:  ";
    //cin>>nombre_archivo; <- no es necesario
    nombre_archivo = "C://Users/Lucero Navarro/Documents/GitHub/proyectoc__prueba.txt"; // la ubicación varia de acuerdo a la laptop
    archivo.open(nombre_archivo, ios::in);
    if(archivo.fail()){
        cout<<"Archivo no encontrado \n";
        lectura();
        exit(1);
    }
    while(!archivo.eof()){//Volver a hacer, captura los saltos de linea
        getline(archivo,palabra1);
        palabra.push_back(palabra1);
    }
    archivo.close();
    return palabra;
}

/*almacenar en un array de filas las filas del texto,
 * almacenar en nu array de columnas las columnas,
 * para las instrucciones = utiliza la libreria atoi, para convertir el string a entero
 *


