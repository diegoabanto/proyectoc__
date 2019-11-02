#ifndef PROYECTOC___CPRODUCTO_H
#define PROYECTOC___CPRODUCTO_H

#include "funciones.h"
class CProducto {
private:
  texto tipo_producto;
public:
    CProducto(texto product);
    texto get_tipo_producto(){return tipo_producto;};
};


#endif //PROYECTOC___CPRODUCTO_H
