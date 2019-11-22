#include "funciones.h"
#include "CRobot.h"
#include "CAlmacen.h"
#include "CInstruccion.h"
#include "CSlot.h"
#include "CProducto.h"

int main(){
    positivo filas = 0, columnas = 0, numero_robots = 1;
    obtencion_de_datos(filas, columnas, numero_robots);
    CAlmacen warehouse(filas, columnas, numero_robots);
    vector<vector<positivo>> matriz_coordenadas = warehouse.creacion_matriz();
    opcion_generacion_menu();




















    /*positivo numero_robots;
    vector<vector<positivo> > posiciones_origen;
    vector<texto> datos= lectura();

 * Lee los archivos y guarda cada linea en el vector.por ejemplo: la linea 1 del texto vendria ser vector[0
 */
    return 0;
}
