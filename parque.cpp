#include "parque.h"
#include "string.h"
#include "horaEntrada.h"

//INICIALIZAR TOPE
void inicioDeDia (disponibilidad &a)
{
    a.tope = 0;
    a.montoRecaudado=0;
}




//DADA UNA CI SABER SI LA FAMILIA ESTA EN EL PARQUE
boolean estaLaCI(disponibilidad a,long int documento)
{
    int i=0;
    boolean resultado=FALSE;
    while (i<a.tope && !resultado)
    {
        if (obtengoDocumento(a.listaParque[i])==documento)
            resultado = TRUE;
        else
            i++;
    }
    return resultado;
}
//DADA UNA FAMILIA VER SI LA MISMA YA ESTA REGISTRADA EN EL PARQUE
boolean familiaEsta(disponibilidad a,familia laFamilia)
{
    int i=0;
    boolean registrada=FALSE;
    while (!registrada && i<a.tope-1)
    {
        if (obtengoDocumento(a.listaParque[i])== obtengoDocumento(laFamilia))
            registrada = TRUE;
        else
            i++;
    }
    return registrada;
}

//CARGAR INGRESO AL PARQUE
void cargarIngreso(disponibilidad &a,familia laFamilia) //PRECONDICION: el parque no debe estar lleno
{
        a.listaParque[a.tope] = laFamilia;
        if( !esSocio(obtengoTipoSocio(laFamilia)))
            a.montoRecaudado= a.montoRecaudado + obtengoImporteEntradas(laFamilia);
        a.tope ++;

}

//SALIDA DE FAMILIA DEL PARQUE, EL RESTO SE MANTIENE EN ORDEN
void salidaParque(disponibilidad &a ,long int documento) //PRECONDICION: el parque no debe estar vacio
{
    int i=0,j=0;
    while (i<a.tope)
    {
        if (obtengoDocumento(a.listaParque[i])== documento)
        {
            if(!esSocio( obtengoTipoSocio(a.listaParque[i]) ))
            for (j=i;j<a.tope-1;j++)
                a.listaParque[j]=a.listaParque[j+1];
            a.tope --;
        }
         else
             i++;
    }

}


//MOSTRAR TODAS LAS FAMILIAS QUE ESTAN EN EL PARQUE CON TODOS LOS DATOS
void mostrarIngresos(disponibilidad a)
{
int i;
    for(i=0;i<a.tope;i++)
        muestroFamiliaOpciones(a.listaParque[i], 1);
}


//LISTAR POR PANTALLA APELLIDO, CEDULA Y HORA DE ENTRADA DE TODAS LAS FAMILIAS REGISTRADAS
void mostrarIngresosDetallados(disponibilidad a) //controlar en el menu que tope no sea 0
{
    int i;
    for (i=0;i<a.tope;i++)
    {
        muestroFamiliaOpciones(a.listaParque[i], 2);
    }
}
//DADA UNA CEDULA, LISTAR DETALLADAMENTE TODOS LOS DATOS DE LA FAMILIA CORRESPONDIENTE
void muestroFamilia(disponibilidad a, long int documento)
{
    int i=0;
    boolean resultado=FALSE;
    while (i<a.tope && !resultado)
        if (documento ==obtengoDocumento(a.listaParque[i]))
        {
          muestroFamiliaOpciones(a.listaParque[i],1);
          resultado=TRUE;
        }
        else
            i++;
}
//VERIFICO SI ESTA LLENO EL PARQUE
boolean estaLLeno(disponibilidad a)
{
    boolean lleno=FALSE;
    if (a.tope == cupos)
        lleno=TRUE;
    return lleno;
}

//VERIFICO SI EL PARQUE ESTA VACIO
boolean noEstaVacio(disponibilidad a)
{
    boolean vacio=FALSE;
    if (a.tope > 0)
        vacio=TRUE;
    return vacio;
}

//TOTAL RECAUDADO HASTA EL MOMENTO POR CONCEPTO DE ENTRADAS VENDIDAS
int totalRecaudado(disponibilidad a)
{
    return a.montoRecaudado;
}

//CANTIDAD DE FAMILIAS SOCIAS Y NO SOCIAS REGISTRADAS ACTUALMENTE
void totalSocYNoSoc(disponibilidad a,  int &totalSocios, int &totalNoSocio)
{
    int i;
    totalSocios=0;
    totalNoSocio=0;
    for (i=0;i<a.tope;i++)
    {
        if (obtengoTipoSocio( a.listaParque[i])== SOCIO)
            totalSocios ++;
        else
            totalNoSocio ++;
    }
}

//FAMILIA CON MAYOR CANTIDAD DE INTEGRANTES EN EL PARQUE
void familiaMasNumerosas(disponibilidad a) //PRECONDICION: controlar en el menu que tope no sea 0.
{
    int max,i;
    familia familiaConMasIntegrantes;
    //max = obtengoCuantosIntegrantes(a.listaParque[0]);
    for (i=0;i<a.tope;i++)
        if (max < obtengoCuantosIntegrantes(a.listaParque[i]))
        {
            familiaConMasIntegrantes = a.listaParque[i];
            max = obtengoCuantosIntegrantes(a.listaParque[i]);
        }
    printf("La familia con mas integrantes es:\n");
    muestroFamiliaOpciones(familiaConMasIntegrantes, 1);
}
//DADA UNA HORA LISTAR POR PANTALLA APELLIDO Y CEDULA DE TODAS LAS FAMILIAS QUE HAYAN INGRESADO A ESA HORA
void ahoraEstanEnParque(disponibilidad a, horaEntrada laHora)
{
    int i,acumulado=0;
    for (i=0;i<a.tope;i++)
        {
        if ( comparoHora(obtengoHoraEntrada(a.listaParque[i]),laHora))
            muestroFamiliaOpciones(a.listaParque[i], 3);
        else
            acumulado ++;
        }
        if(acumulado==a.tope)
            printf("\nNo ingresaron familias en esa hora.");
}

//DADA UNA FECHA, LISTAR POR PANTALLA APELLIDO, CEDULA, TIPO DE AFILIACION DE TODAS LAS FAMILIAS SOCIAS REGISTRADAS QUE TENGAN ESA FECHA
void afiliadosFecha(disponibilidad a, fecha laFecha)
{
    int i,acumulado=0;
    for (i=0;i<a.tope;i++)
        {
        if (comparoFecha(fechaAfiliacion(obtengoSocio(a.listaParque[i])),laFecha))
            muestroFamiliaOpciones(a.listaParque[i], 4);
        else
            acumulado++;
        }
        if(acumulado==a.tope)
            printf("\nNo ingresaron socios en la fecha ingresada.");
}
