#ifndef TIPOSOCIO_H_INCLUDED
#define TIPOSOCIO_H_INCLUDED
#include <stdio.h>

typedef enum {PARCIAL,TOTAL,MEDIA} tipoSocio;

//CARGAR TIPO SOCIO
void cargarTipoSocio (tipoSocio &tipoSo);

//MOSTRAR EN PANTALLA EL TIPO DE SOCIO
void mostrarTipoSocio (tipoSocio tipoSo);

#endif // TIPOSOCIO_H_INCLUDED
