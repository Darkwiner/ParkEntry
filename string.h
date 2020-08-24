#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include "boolean.h"

const int MAX = 80;   //STRING
typedef char string [MAX];

//CARGAR STRING
void cargarString (string &s);

//MOSTRAR EN PANTALLA EL STRING
void mostrarString (string s);

//LARGO STRING
int strlar (string texto);

//ES MENOR O MAYOR ALFABETICAMENTE
boolean strmen (string uno,string dos);

//VERIFICO SI DOS STRINGS SON IGUALES
boolean streq(string texto1, string texto2);

//COPIAR EL PRIMER STRING EN EL SEGUNDO
void strcop(string & texto1, string  texto2);

//CONCATENO STRING, SEGUNDO EN EL PRIMERO
void strcon(string & texto1,string texto2);

//HACER SWAPING EN DOS STRINGS
void strswp(string & texto1, string & texto2);

#endif // STRING_H_INCLUDED
