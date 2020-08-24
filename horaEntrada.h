/*---------------------MODULO FAMILIA----------------------*/
#ifndef HORAENTRADA_H_INCLUDED
#define HORAENTRADA_H_INCLUDED
#include <stdio.h>
#include "boolean.h"

typedef struct {int hora;
                int minutos;
                }horaEntrada;

//CARGA ENTRADA DE LA FAMILIA
void cargarHoraEntrada (horaEntrada &horaEn);

//MUESTRA LA HORA DE ENTRADA POR PANTALLA
void mostrarHoraEntrada (horaEntrada horaEn);

//VALIDAR HORA
boolean validarHora (horaEntrada horaEn);

//COMPARO SI DOS HORAS SON IGUALES
boolean comparoHora(horaEntrada horaUno,horaEntrada horaDos);

#endif // HORAENTRADA_H_INCLUDED
