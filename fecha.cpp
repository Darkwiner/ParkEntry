#include "fecha.h"

//VALIDAR FECHA
boolean fechaValida(fecha laFecha)
{
    boolean esValido=FALSE;

    switch(laFecha.mes)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(laFecha.dia<32 && laFecha.dia>0)
                esValido=TRUE;
        break;

        case 4:
        case 6:
        case 9:
        case 11:
            if(laFecha.dia<31 && laFecha.dia>0)
                esValido=TRUE;
        break;

        case 2:
            if(laFecha.anio%4==0)
            {
             if(laFecha.dia<30 && laFecha.dia>0)
                esValido=TRUE;
            }
            else if(laFecha.dia<29 && laFecha.dia>0)
                esValido=TRUE;
        break;

    }
    return esValido;
}

//CARGA MODULO FECHA
void cargarFecha (fecha &carFecha)
{
        printf ("\nIngrese dia: ");
        scanf ("%d",&carFecha.dia);
        printf ("\nIngrese mes: ");
        scanf ("%d",&carFecha.mes);
        printf ("\nIngrese anio: ");
        scanf ("%d",&carFecha.anio);
        if (!fechaValida(carFecha))
            {
            printf ("\nFecha invalida, vuelva a ingresar una fecha valida.");
            cargarFecha (carFecha);
            }

}

//MOSTRAR FECHA EN PANTALLA
void mostrarFecha (fecha carFecha)
{
    printf ("%d/%d/%d",carFecha.dia,carFecha.mes,carFecha.anio);
}

//SELECTORAS
int pDia(fecha laFecha)
{
    return laFecha.dia;
}

int pMes(fecha laFecha)
{
    return laFecha.mes;
}

int pAnio(fecha laFecha)
{
    return laFecha.anio;
}


boolean comparoFecha(fecha fechaUno,fecha fechaDos)
{
    boolean resultado=FALSE;
    if(fechaUno.anio==fechaDos.anio && fechaUno.mes==fechaDos.mes && fechaUno.dia==fechaDos.dia)
        resultado=TRUE;
    return resultado;
}
