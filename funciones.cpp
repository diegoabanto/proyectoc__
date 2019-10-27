#include "funciones.h"
vector<texto> lectura() {
    texto nombre_archivo, palabra1;
    positivo contador = 0;
    vector<texto> palabra(1000);
    entrada archivo;
    cout<<"Ingrese el nombre del archivo:  ";
    cin>>nombre_archivo;
    nombre_archivo = "d:\\proyectoc++\\"+nombre_archivo+".txt"; // la ubicación varia de acuerdo a la laptop
    archivo.open(nombre_archivo, ios::in);
    if(archivo.fail()){
        cout<<"Archivo no encontrado \n";
        lectura();
        exit(1);
    }
    while(!archivo.eof()){
        getline(archivo,palabra1);
        palabra.push_back(palabra1);
    }
    archivo.close();
    return palabra;
}


