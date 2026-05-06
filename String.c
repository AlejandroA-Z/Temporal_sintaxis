#include <stdio.h>
#include <ctype.h>
// Definimos const char para que la funcion solo lea la cadena y no la modifique
/*
Precondicion: Un puntero a una cadena de caracteres
Postcondicion: Devuelve "1" si la cadena es vacia; devuelve "0" si la cadena no es
vacia
*/
int IsEmpty(const char *str)
{
    // Si el puntero es NULL o el primer carácter es el terminador nulo '\0'
    if (str == NULL || str[0] == '\0')
    {
        return 1;
    }
    return 0;
}

//Propuesta

#include "Strings.h"

int IsEmpty(const char *str) {
    return str[0] == '\0';
}

 
//   Implementación Recursiva: 


int GetLength(const char *str) {
    if (str[0] == '\0') {
        return 0;
    }
    return 1 + GetLength(str + 1);
}

 
 //  Implementación de AreEqual:
//   Compara caracter por caracter

int AreEqual(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0;
        }
        i++;
    }
    // Son iguales solo si ambas terminaron al mismo tiempo
    return s1[i] == s2[i];
}
