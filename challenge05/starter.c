#include <stdio.h>


extern int suma(int a, int b) {

    int resultado;

    resultado = a + b;

    return resultado;

}


#if EXISTE == 1
  void pruebas();
#endif

int main() {

  #if EXISTE == 1
    pruebas();
  #endif

    return 0;

}
