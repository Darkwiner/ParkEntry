#ifndef SOCIA_H_INCLUDED
#define SOCIA_H_INCLUDED
#include "fecha.h"
#include "tipoSocio.h"

typedef struct {fecha fechaAfiliacion;
                tipoSocio tipoAfiliacion;
                }socio;

//CARGA FAMILIA SOCIA
void cargarSocio (socio &elSocio);

//MOSTRAR EN PANTALLA FAMILIA SOCIO
void mostrarSocio (socio elSocio);

//SELECTORAS
fecha fechaAfiliacion (socio elSocio);

tipoSocio tipoAfiliacion (socio elSocio);

#endif // SOCIA_H_INCLUDED
