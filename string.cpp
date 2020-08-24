#include "string.h"

//CARGAR STRING
void cargarString (string &s)
{
    int i=0;
    char car;
    //SOLICITAR TEXTO ESPECIFIO A CARGAR EN EL MAIN
    fflush (stdin);
    scanf ("%c", &car);
    while (car !='\n' && i < MAX-1)
    {
        s[i] = car;
        i++;
        scanf ("%c", &car);
    }
    s[i]='\0';
}

//MOSTRAR EN PANTALLA EL STRING
void mostrarString (string s)
{
    int i=0;
    //SOLICITAR EN EL MAIN POR PANTALLA LO QUE SE QUIERE MOSTRAR
    while (s [i] != '\0')
    {
        printf("%c",s[i]);
        i++;
    }
    printf("\n");
}

//LARGO STRING
int strlar (string texto)
{
    int i=0;
    while (texto[i]!='\0')
    {
        i++;
    }
    return i;
}


//ES MENOR O MAYOR ALFABETICAMENTE
boolean strmen (string uno,string dos)
{
    boolean menor=TRUE;
    int i=0;
    while (uno[i]!='\0' && dos[i]!='\0' && menor)
    {
        if (dos[i]>uno[i])
            menor = FALSE;
        else
            i++;
    }
    if(dos[i]=='\0' && uno[i]!=dos[i])
        menor=FALSE;

    return menor;
}


//VERIFICO SI DOS STRINGS SON IGUALES
boolean streq(string texto1, string texto2)
{
    int i=0;
    boolean resultado=TRUE;
    while(texto1[i]!='\0' && texto2[i]!='\0' && resultado)
    {
        if(texto1[i]!=texto2[i])
            resultado=FALSE;
        else
            i++;
    }
    if(texto1[i]!=texto2[i]&& resultado )
        resultado=FALSE;
    return resultado;
}

//COPIAR EL PRIMER STRING EN EL SEGUNDO
void strcop(string & texto1, string  texto2)
{
    int i=0;
    while(texto2[i]!='\0')
        {
            texto1[i]=texto2[i];
            i++;
        }
        texto1[i]='\0';
}

//CONCATENO STRING, SEGUNDO EN EL PRIMERO
void strcon(string & texto1,string texto2)
{
    int i=0,j=0;
    while(texto1[i]!='\0')
    {
     i++;
    }
    while(texto2[j]!='\0')
        {
            texto1[i]=texto2[j];
            i++;
            j++;
        }

    texto1[i]='\0';
}

//HACER SWAPING EN DOS STRINGS
void strswp(string & texto1, string & texto2)
{
    int i=0;
    string auxTexto;
    auxTexto[0]='\0';
    while(texto1[i]!='\0' && i<MAX-1)
    {
        auxTexto[i]=texto1[i];
        i++;
    }
    auxTexto[i]='\0';
    i=0;
    while(texto2[i]!='\0' && i<MAX-1)
    {
        texto1[i]=texto2[i];
        i++;
    }
    texto1[i]='\0';
    i=0;
    while(auxTexto[i]!='\0' && i<MAX-1)
    {
        texto2[i]=auxTexto[i];
        i++;
    }
    texto2[i]='\0';
}

