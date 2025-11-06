#include <assert.h>


int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);


extern void pruebas() {


  assert(7 == suma(4, 3));
  assert(5 == suma(7, -2));
  assert(-5 == suma(-3, -2));

  assert(1 == resta(4, 3));
  assert(9 == resta(7, -2));
  assert(-5 == resta(-7, -2));
  
  assert(12 == multiplicacion(4, 3));

  assert(2 == division(4, 2));
  assert(5 == division(-10, -2));
  assert(-3 == division(9, -3));
  assert(0 == division(5, 0));


}
