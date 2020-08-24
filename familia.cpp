#include "familia.h"

//CARGAR FAMILIA
void crearFamilia (familia &nuevaFamilia)
{
    int cantIntegrantes;
    printf ("\nIngrese apellido de la familia: ");
    cargarString (nuevaFamilia.apellido);
    //printf ("\nIngrese cedula: ");
    //scanf ("%ld",&nuevaFamilia.cedula);
    printf ("\nIngrese cantidad de integrantes: ");
    do
    {
        scanf ("%d",&cantIntegrantes);
        if (cantIntegrantes <= 0)
            printf ("\nLa cantidad de integrantes debe ser mayor que 0, ingrese nuevamente: ");
        else
            nuevaFamilia.cantIntegrantes = cantIntegrantes;
    }while (cantIntegrantes <= 0);
    cargarHoraEntrada (nuevaFamilia.hora);
    cargarSocioOno (nuevaFamilia.discriminante);
    if (nuevaFamilia.discriminante == SOCIO)
        cargarSocio (nuevaFamilia.socioDeInstitucion.afiliacion);
    else
        nuevaFamilia.socioDeInstitucion.totalEntrada = costoEntrada * nuevaFamilia.cantIntegrantes;

}
//CARGO CI EN LA FAMILIA
void cargoCiFamilia (familia &nuevaFamilia,long int documento)
{
    nuevaFamilia.cedula = documento;
}

//MENU MOSTRAR FAMILIA
void muestroFamiliaOpciones(familia nuevaFamilia,int opcion)
{
    switch(opcion)
    {
        case 1://MUESTRO FAMILIA DATOS COMPLETOS
            printf ("\nApellido de la familia: ");
            mostrarString (nuevaFamilia.apellido);
            printf ("Cedula: %ld",nuevaFamilia.cedula);
            printf ("\nCantidad de integrantes: %d",nuevaFamilia.cantIntegrantes);
            printf ("\nHora de ingreso: ");
            mostrarHoraEntrada (nuevaFamilia.hora);
            printf ("\nFamilia: ");
            mostrarSocioOno (nuevaFamilia.discriminante);
            if (nuevaFamilia.discriminante == SOCIO)
            {
                printf ("\nFecha de afiliacion: ");
                mostrarFecha (nuevaFamilia.socioDeInstitucion.afiliacion.fechaAfiliacion);
                printf ("\nTipo de socio: ");
                mostrarTipoSocio (nuevaFamilia.socioDeInstitucion.afiliacion.tipoAfiliacion);
                printf ("\n---------------------------");
            }
            else
                printf ("\nImporte abonado por %d es: $%d",nuevaFamilia.cantIntegrantes,nuevaFamilia.socioDeInstitucion.totalEntrada);
                printf ("\n---------------------------");
            break;
        case 2://MUESTRO APELLIDO, CEDULA Y HORA DE INGRESO DE LA FAMILIA
            printf ("\nApellido de la familia: ");
            mostrarString (nuevaFamilia.apellido);
            printf ("Cedula: %ld",nuevaFamilia.cedula);
            printf ("\nHora de ingreso: ");
            mostrarHoraEntrada (nuevaFamilia.hora);
            printf ("\n---------------------------");
            break;
        case 3://MUESTRO APELLIDO Y CI DE LA FAMILIA
            printf ("\nApellido de la familia: ");
            mostrarString (nuevaFamilia.apellido);
            printf ("Cedula: %ld",nuevaFamilia.cedula);
            printf ("\n---------------------------");
            break;
        case 4://MUESTRO APELLIDO, CI Y TIPO DE AFILIACION DE LA FAMILIA
            printf ("\nApellido de la familia: ");
            mostrarString (nuevaFamilia.apellido);
            printf ("Cedula: %ld",nuevaFamilia.cedula);
            printf ("\nTipo de afiliacion: ");
            mostrarTipoSocio(tipoAfiliacion(obtengoSocio(nuevaFamilia)));
            printf ("\n---------------------------");

            break;

    }
}

//SELECTORAS
//BUSCO APELLIDO
void obtengoApellido(familia laFamilia,string &elApellido)
{
    strcop(laFamilia.apellido,elApellido);
}

//OBTENGO DOCUMENTO
long int obtengoDocumento(familia laFamilia)
{
    return laFamilia.cedula;
}

//OBTENGO CANTIDAD DE INTEGRANTES
int obtengoCuantosIntegrantes(familia laFamilia)
{
    return laFamilia.cantIntegrantes;
}

//OBTENGO HORA DE ENTRADA
horaEntrada obtengoHoraEntrada(familia laFamilia)
{
    return laFamilia.hora;
}

//OBTENGO SI ES SOCIO O NO
socioOno obtengoTipoSocio(familia laFamilia)
{
    return laFamilia.discriminante;
}

//OBTENGO TIPO DE AFILIACION
socio obtengoSocio(familia laFamilia)
{
    return laFamilia.socioDeInstitucion.afiliacion;
}

//OBTENGO IMPORTE DE ENTRADAS
int obtengoImporteEntradas(familia laFamilia)
{
    return laFamilia.socioDeInstitucion.totalEntrada;
}
