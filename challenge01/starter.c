#include <stdio.h>

int pruebas();


extern int suma(int a, int b) {

    int resultado;

    resultado = a + b;

    return resultado;

}

int main() {

    pruebas();

    return 0;

}