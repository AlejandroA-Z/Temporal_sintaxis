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

//Propuesta

#include <assert.h>
#include <stdlib.h>
#include "Strings.h"

int main(void) {
    // Tests para IsEmpty
    assert(IsEmpty("") == 1);
    assert(IsEmpty("hola") == 0);

    // Tests para GetLength
    assert(GetLength("") == 0);
    assert(GetLength("abc") == 3);
    assert(GetLength("Hola Mundo") == 10);

    // Tests para AreEqual
    assert(AreEqual("utn", "utn") == 1);
    assert(AreEqual("utn", "utnfrba") == 0);
    assert(AreEqual("", "") == 1);
    assert(AreEqual("ABC", "abc") == 0);

    return EXIT_SUCCESS;
}
