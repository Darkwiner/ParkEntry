#include "tipoSocio.h"
#include "boolean.h"

//CARGAR TIPO SOCIO
void cargarTipoSocio (tipoSocio &tipoSo)
{
    int opcion;
    printf ("\nIngrese tipo afiliacion 1-PARCIAL, 2-TOTAL, 3-MEDIA: ");

    do
    {
        fflush(stdin);
        scanf ("%d",&opcion);
        switch (opcion)
        {
            case 1 : tipoSo = PARCIAL;
                break;
            case 2 : tipoSo = TOTAL;
                break;
            case 3 : tipoSo = MEDIA;
                break;
            default : printf ("\nNo es una opcion valida, ingese opcion 1, 2 o 3: ");
        }
    }while (opcion < 1 || opcion > 3);
}

//MOSTRAR EN PANTALLA EL TIPO DE AFILIACION
void mostrarTipoSocio (tipoSocio tipoSo)
{
    switch (tipoSo)
    {
        case PARCIAL : printf ("Parcial");
            break;
        case TOTAL : printf ("Total");
            break;
        case MEDIA : printf ("Media");
            break;
    }
}
