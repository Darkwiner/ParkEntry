#ifndef SOCIAONO_H_INCLUDED
#define SOCIAONO_H_INCLUDED
#include "boolean.h"

typedef enum {SOCIO,NO_SOCIO} socioOno;

//CARGAR SI ES SOCIO O NO
void cargarSocioOno (socioOno &tipo);

//MOSTRAR SOCIO O NO
void mostrarSocioOno (socioOno tipo);

//SI ES SOCIO DEVUELVO TRUE
boolean esSocio(socioOno tipo);

#endif // SOCIAONO_H_INCLUDED
