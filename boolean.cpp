#include "boolean.h"

//CARGAR BOOLEANO
void cargarBooleano (boolean &b)
{
    char letra;
    printf ("Ingrese S-para SI o N-para NO: ");
    fflush (stdin);
    scanf ("%c",&letra);
    if (letra == 'S' || letra == 's')
        b = TRUE;
    else
        b = FALSE;
}

//MOSTRAR RESULTADO DE BOOLEANO
void mostrarBooleano (boolean b)
{
    if (b)
        printf ("\nTRUE");
    else
        printf ("\nFALSE");
}
