#include <stdio.h>


extern int suma(int a, int b) {

    int resultado;

    resultado = a + b;

    return resultado;

}

#if EXISTS == 1
  void pruebas();
#endif


int main() {

    #if EXISTS == 1
      pruebas();
    #endif

    return 0;

}
