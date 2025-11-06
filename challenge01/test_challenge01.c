#include <assert.h>

int suma(int a, int b);

extern void pruebas() {

    assert(5 == suma(2, 3));

    assert(-4 == suma(2, -6));

    assert(-5 == suma(-2, -3));

}
