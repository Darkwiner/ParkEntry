#ifndef PARQUE_H_INCLUDED
#define PARQUE_H_INCLUDED
#include "familia.h"


const int cupos = 50;
typedef struct
            {
              familia listaParque [cupos];
              int tope;
              int montoRecaudado;
            } disponibilidad;

//INIZIALIZAR TOPE
void inicioDeDia (disponibilidad &a);

//DADA UNA CI SABER SI LA FAMILIA ESTA EN EL PARQUE
boolean estaLaCI(disponibilidad a,long int documento);

//DADA UNA FAMILIA VER SI LA MISMA YA ESTA REGISTRADA EN EL PARQUE
boolean familiaEsta(disponibilidad a,familia laFamilia);

//CARGAR INGRESO AL PARQUE
void cargarIngreso(disponibilidad &a ,familia e);

//SALIDA DE FAMILIA DEL PARQUE,EL RESO DEBE MANTENER EL ORDEN EN EL QUE ESTA
void salidaParque(disponibilidad &a,long int documento);

//MOSTRAR ENTRADAS AL PARQUE
void mostrarIngresos(disponibilidad a);

//LISTAR POR PANTALLA APELLIDO, CEDULA, HORA DE ENTRADA DE TODAS LAS FAMILIAS REGISTRADAS
void mostrarIngresosDetallados(disponibilidad a);

//DADA UNA CEDULA, LISTAR TODOS LOS DATOS DE LA FAMILIA CORRESPONDIENTE
void muestroFamilia(disponibilidad a, long int documento);

//VERIFICO SI EL PARQUE ESTA LLENO
boolean estaLLeno(disponibilidad a);

//VERIFICO SI EL PARQUE ESTA VACIO
boolean noEstaVacio(disponibilidad a);

//TOTAL RECAUDADO HASTA EL MOMENO POR EL CONCEPTO DE ENTRADAS VENDIDAS
int totalRecaudado(disponibilidad a);

//CANTIDAD DE FAMILIAS SOCIAS Y NO SOCIAS REGISTRADAS
void totalSocYNoSoc(disponibilidad a, int &totalSocios, int &totalNoSocio);

//FAMILIA CON MAYOR CANTIDAD DE INTEGRANTES EN EL PARQUE
void familiaMasNumerosas(disponibilidad a);

//DADA UNA HORA, LISTAR POR PANTALLA APELLIDO Y CEDULA DE TODAS LAS FAMILIAS QUE HAYAN INGRESADO A ESA HORA
void ahoraEstanEnParque(disponibilidad a, horaEntrada laHora);

//DADA UNA FECHA, LISTAR POR PANTALLA APELLIDO, CEDULA Y TIPO DE AFILIACION DE TODAS LAS FAMILIAS SOCIAS REGISTRADAS QUE TENGAN ESA FECHA DE AFILIACION
void afiliadosFecha(disponibilidad a, fecha laFecha);


#endif // PARQUE_H_INCLUDED
