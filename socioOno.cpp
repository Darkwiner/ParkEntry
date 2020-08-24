#include "socioOno.h"

//CARGAR SI ES SOCIO O NO
void cargarSocioOno (socioOno &tipo)
{
    int opcion = 0;
    printf ("\nIngrese el tipo de socio, 1-SOCIO 2-NO SOCIO: ");
    do {
        fflush(stdin);
        scanf ("%d",&opcion);
        switch (opcion)
        {
            case 1 : tipo = SOCIO;
                break;
            case 2 : tipo = NO_SOCIO;
                break;
            default : printf ("\nLa opcion seleccionada no es correcta, elija una opcion valida: ");
        }
    } while (opcion < 0 || opcion > 2);
}


//MOSTRAR SOCIO O NO
void mostrarSocioOno (socioOno tipo)
{
    switch(tipo)
    {
        case SOCIO:
            printf("Socio");
        break;

        case NO_SOCIO:
            printf("No Socio");
        break;
    }
}

//SI ES SOCIO DEVUELVO TRUE
boolean esSocio(socioOno tipo)
{
    boolean resultado=FALSE;
    if(tipo==SOCIO)
        resultado=TRUE;
   return resultado;
}
