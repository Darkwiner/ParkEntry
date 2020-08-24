/*---------------------MODULO FAMILIA----------------------*/
#include "horaEntrada.h"


//VALIDAR HORA
boolean validarHora (horaEntrada horaEn)
{
    boolean correcta=FALSE;
   if((horaEn.hora >= 0 && horaEn.hora < 23)  && (horaEn.minutos >= 0 &&  horaEn.minutos < 60))
        correcta=TRUE;
   return correcta;
}
//CARGA ENTRADA DE LA FAMILIA
void cargarHoraEntrada (horaEntrada &horaEn)
{
    printf ("\nHora de entrada al parque.");
    printf ("\nIngrese hora: ");
    fflush (stdin);
    scanf ("%d",&horaEn.hora);
    printf ("\nIngrese minuto: ");
    fflush (stdin);
    scanf ("%d",&horaEn.minutos);
    if(!validarHora(horaEn))
       {
        printf ("\nLa hora ingresada no es correcta, digite una hora valida");
        cargarHoraEntrada(horaEn);
       }
}

//MUESTRA LA HORA DE ENTRADA POR PANTALLA
void mostrarHoraEntrada (horaEntrada horaEn)
{
    printf("%d:%d",horaEn.hora,horaEn.minutos);
}

//SELECTORAS
int horaEnt (horaEntrada hora)
{
    return hora.hora;
}

int minutoEnt (horaEntrada minuto)
{
    return minuto.minutos;
}

//COMPARO SI DOS HORAS SON IGUALES
boolean comparoHora(horaEntrada horaUno,horaEntrada horaDos)
{
    boolean resultado=FALSE;
    if(horaUno.hora==horaDos.hora)
        if(horaUno.minutos==horaDos.minutos)
            resultado=TRUE;
    return resultado;
}
