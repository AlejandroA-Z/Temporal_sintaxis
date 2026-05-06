#include <stdlib.h>
#include <ctype.h>

int IsEmpty(const char *str);

//Propuesta

#ifndef STRINGS_H_INCLUDED
#define STRINGS_H_INCLUDED

int IsEmpty(const char *str);

// Calcula la longitud de la cadena de forma recursiva
int GetLength(const char *str);

// Compara si dos cadenas son iguales
int AreEqual(const char *s1, const char *s2);

#endif
