#include <assert.h>


int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);


extern void tests() {


    assert(30 == multiplicacion(-5, -6));

    assert(13 == resta(3, -10));

    assert(-7 == suma(3, -10));

    assert(0 == division(5, 0));

}
