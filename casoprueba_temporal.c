#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

/* Incluimos tu biblioteca de strings */
#include "String.h"

int main()
{

    assert(IsEmpty(NULL) == 1);

    assert(IsEmpty("") == 1);

    assert(IsEmpty("Esto es una cadena") == 0);

    return EXIT_SUCCESS;
}