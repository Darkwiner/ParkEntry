#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <stdio.h>
#include "boolean.h"

typedef struct {int dia;
                int mes;
                int anio;
                }fecha;

//CARGA MODULO FECHA
void cargarFecha (fecha &carFecha);

//MOSTRAR FECHA EN PANTALLA
void mostrarFecha (fecha carFecha);

//SELECTORAS
int pDia(fecha laFecha);

int pMes(fecha laFecha);

int pAnio(fecha laFecha);

//VALIDAR FECHA
boolean fechaValida(fecha laFecha);

//comparo fecha
boolean comparoFecha(fecha fechaUno,fecha fechaDos);

#endif // FECHA_H_INCLUDED
