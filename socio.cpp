#include "socio.h"

//CARGA FAMILIA SOCIA
void cargarSocio (socio &elSocio)
{
    printf ("\nFecha de afiliacion: ");
    cargarFecha (elSocio.fechaAfiliacion);
    cargarTipoSocio (elSocio.tipoAfiliacion);
}

//MOSTRAR EN PANTALLA FAMILIA SOCIO
void mostrarSocio (socio elSocio)
{
    mostrarFecha (elSocio.fechaAfiliacion);
    mostrarTipoSocio (elSocio.tipoAfiliacion);
}

//SELECTORAS
fecha fechaAfiliacion (socio elSocio)
{
    return elSocio.fechaAfiliacion;
}

tipoSocio tipoAfiliacion (socio elSocio)
{
    return elSocio.tipoAfiliacion;
}
