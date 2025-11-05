#include <stdio.h>


int tests();


int r1;

extern int suma(int a, int b) {

    int resultado;

    resultado = a + b;

    return resultado;

}

extern int resta(int a, int b) {

    int resultado;

    resultado = a - b;

    return resultado;

}

extern int multiplicacion(int a, int b) {

    int resultado;

    resultado = a * b;

    return resultado;

}

extern int division(int a, int b) {

    int resultado;

    if (b == 0) {

        printf("No se puede dividir entre cero \n");
        return 0;

    } else {

        resultado = a / b;

        return resultado;

    }

}



int main() {
    
    printf("Calculadora inicializada.\n");

    int status = tests();

    return 0;

}