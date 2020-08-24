#include "menu.h"
#include "parque.h"
int main ()
{

    int opcion=0;
    boolean salirDelSistema=FALSE;
    disponibilidad listaParque;
    inicioDeDia (listaParque);

    while(!salirDelSistema)
    {
        boolean salirDelMenu=FALSE;
        menuInicio();
        do
        {
            scanf ("%d",&opcion);
            printf("\n");

            if (opcion==0 || opcion>4)
            {
                printf("Opcion invalida, ingrese una opcion valida: ");
            }
        }
        while(opcion==0 || opcion>4);

        switch (opcion)
        {
        case 1 :
            long int documento;
            familia laFamilia;
            printf ("\nIngrese documento: ");
            scanf ("%ld",&documento);

            if (!estaLaCI (listaParque,documento))
            {
                if (!estaLLeno (listaParque))
                {
                    cargoCiFamilia (laFamilia,documento);
                    crearFamilia (laFamilia);
                    cargarIngreso (listaParque,laFamilia);
                }
                else
                    printf ("El parque esta lleno, vuelva mas tarde.\n");
            }
            else
                printf ("La familia ya esta registrada.\n");

            break;

        case 2 :
            long int documento2;
            printf ("\nIngrese documento: ");
            scanf ("%ld",&documento2);
            if (estaLaCI (listaParque,documento2))
                salidaParque (listaParque,documento2);
            break;

        case 3 :


            while(!salirDelMenu)
            {
                menuConsultas ();
                do
                {
                    scanf ("%d",&opcion);
                    if (opcion==0 || opcion>8)
                    {
                        printf("-Opcion invalida, ingrese una opcion valida: ");
                    }
                }
                while (opcion==0 || opcion>8);

                switch (opcion)
                {
                case 1 ://muestro el total recaudado al momento
                    printf("-El total recaudado de momento es: $%d.\n",totalRecaudado(listaParque));
                    break;
                case 2 ://muestro el total de familias socias y no socias
                    int totalSocios,totalNoSocio;
                    totalSocYNoSoc(listaParque,totalSocios,totalNoSocio);
                    printf("-El total de socios en el parque es: %d, y no socios: %d.\n",totalSocios,totalNoSocio);
                    break;
                case 3 ://muestro la familia mas numerosa
                    if(noEstaVacio(listaParque))
                        familiaMasNumerosas(listaParque);
                    else
                        printf("-El parque esta vacio.\n");
                    break;
                case 4 ://muestro las familias, los datos a mostrar son apellido,ci,hora de ingreso
                    if(noEstaVacio(listaParque))
                        mostrarIngresosDetallados(listaParque);
                    else
                        printf("-El parque esta vacio.\n");
                    break;
                case 5 ://dado una CI muestro los datos de la familias completos
                    if(noEstaVacio(listaParque))
                    {
                        long int cedula;
                        printf ("\nIngrese cedula: ");
                        scanf ("%ld",&cedula);
                        if (estaLaCI (listaParque,cedula))
                        {
                            muestroFamilia(listaParque,cedula);
                        }
                        else
                            printf ("-La familia no esta en el parque.\n");
                    }
                    else
                        printf("-El parque esta vacio.\n");

                    break;
                case 6 ://dado una hora muestro los datos de la familias que ingresaon a esa hora, los datos que muestro son apellido y ci
                        if(noEstaVacio(listaParque))
                        {
                            horaEntrada laHora;
                            cargarHoraEntrada(laHora);
                            ahoraEstanEnParque(listaParque,laHora);
                        }
                        else
                            printf("-El parque esta vacio.\n");
                    break;
                case 7 ://dado una fecha muestro los datos de la familias que se registraron en esa fecha, los datos que muestro son apellido y ci tipo de afiliacion
                    if(noEstaVacio(listaParque))
                    {
                        int totalSocios,totalNoSocio;
                        totalSocYNoSoc(listaParque,totalSocios,totalNoSocio);
                        if(totalSocios>0)
                        {
                            fecha laFecha;
                            cargarFecha(laFecha);
                            afiliadosFecha(listaParque,laFecha);
                        }
                        else
                            printf("-NO hay familias socias registradas.\n");

                    }
                    else
                        printf("-El parque esta vacio.\n");
                    break;
                case 8 :
                    salirDelMenu=TRUE;
                    break;
                }
                char continuar;
                printf("\nPresione ENTER para continuar\n");
                fflush(stdin);
                scanf("%c",&continuar);
            }
            break;
        case 4 :
            printf ("\nDesea salir del programa?");
            cargarBooleano (salirDelSistema);
            salirDelMenu=TRUE;
            break;
        }
    }

    return 0;
}



