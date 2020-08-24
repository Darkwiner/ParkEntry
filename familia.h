#ifndef FAMILIA_H_INCLUDED
#define FAMILIA_H_INCLUDED
#include "horaEntrada.h"
#include "socioOno.h"
#include "socio.h"
#include "tipoSocio.h"
#include "string.h"

const int costoEntrada = 150;

typedef struct
{
    string apellido;
    long int cedula;
    int cantIntegrantes;
    horaEntrada hora;
    socioOno discriminante;
    union
    {
        socio afiliacion;
        int totalEntrada;
    } socioDeInstitucion;
}familia;

//CARGAR FAMILIA
void crearFamilia (familia &nuevaFamilia);

//CARGO CI EN LA FAMILIA
void cargoCiFamilia (familia &nuevaFamilia, long int documento);

//MENU MOSTRAR FAMILIA
void muestroFamiliaOpciones(familia nuevaFamilia,int opcion);

//SELECTORAS FAMILIA
//BUSCO APELLIDO
void obtengoApellido(familia laFamilia,string &elApellido);

//OBTENGO CEDULA
long int obtengoDocumento(familia laFamilia);

//OBTENGO CANTIDAD DE INTEGRANTES
int obtengoCuantosIntegrantes(familia laFamilia);

//OBTENGO HORA DE ENTRADA
horaEntrada obtengoHoraEntrada(familia laFamilia);

//OBTENGO SI ES SOCIO O NO
socioOno obtengoTipoSocio(familia laFamilia);

//OBTENGO TIPO DE AFILIACION
socio obtengoSocio(familia laFamilia);

//OBTENGO IMPORTE DE ENTRADAS
int obtengoImporteEntradas(familia laFamilia);

#endif // FAMILIA_H_INCLUDED
