
#ifndef PROYECTOC___FUNCIONES_H
#define PROYECTOC___FUNCIONES_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;
typedef size_t range;
typedef ifstream entrada;
typedef double decimal;
typedef size_t positivo;
typedef void normal;
typedef string texto;
typedef char nombre;
typedef bool estado;
//vector<texto> lectura(); //Funcion de lectura mal definida, no recomendable trabajar con vector
normal obtencion_de_datos(positivo &filas, positivo &columnas, positivo &numero_robots);
positivo opcion_generacion_menu();



#endif //PROYECTOC___FUNCIONES_H
