#include "funciones.h"

normal obtencion_de_datos(positivo &filas, positivo &columnas, positivo &numero_robots) {
    cout<<"Ingrese el número de filas del almacen: "; cin>> filas;
    cout<<"Ingrese el número de columnas del almacen: "; cin>> columnas;
    cout<<"Ingrese el número de robots: "; cin>> numero_robots;

}

positivo opcion_generacion_menu() {
    positivo opcion;
    cout<<"Menu"<<endl<<"....................."<<endl<<"Escoga una opcion: ";
    cout<<"1. Ingresar objetos a un slot"<<endl;
    cout<<"2. Retirar objetos de un slot"<<endl;
    cout<<"3. Mostrar contenido de un slot"<<endl;
    cout<<"4. Mostrar recorrido de un robot"<<endl; cin>>opcion;
    return opcion;
}










/*vector<texto> lectura() {
    texto nombre_archivo, palabra1;
    positivo contador = 0;
    vector<texto> palabra(1000);
    entrada archivo;
    //cout<<"Ingrese el nombre del archivo:  ";
    //cin>>nombre_archivo; <- no es necesario
    nombre_archivo = "D:\\123\\prueba.txt"; // la ubicación varia de acuerdo a la laptop
    archivo.open(nombre_archivo, ios::in);
    if(archivo.fail()){
        cout<<"Archivo no encontrado \n";
        //lectura();
        exit(1);
    }
    while(!archivo.eof()){//Volver a hacer, captura los saltos de linea
        getline(archivo,palabra1);
        palabra.push_back(palabra1);
    }
    archivo.close();
    return palabra;
}

almacenar en un array de filas las filas del texto,
 * almacenar en nu array de columnas las columnas,
 * para las instrucciones = utiliza la libreria atoi, para convertir el string a entero
 *
*/


