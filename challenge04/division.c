#include <stdio.h>
#include "calc.h"

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