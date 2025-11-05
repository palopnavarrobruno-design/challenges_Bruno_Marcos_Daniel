#include <assert.h>

#define ESTADO_IDEAL 0


size_t mi_strlen(const char *s);
int mi_strcmp(const char *s1, const char *s2);
char *mi_strcpy(char *dest, const char *src);


// Variables para hacer las pruebas
char *s = "Adios mundo cruel";

char *s1 = "Esta cadena es igual a la otra";
char *s2 = "Esta cadena es igual a la otra";

char *dest = "Hola Mundo";
char *src = "Mi moto alpina de rapante";


extern int pruebas() {


    assert(17 == mi_strlen(s));

    assert(ESTADO_IDEAL == mi_strcmp(s1, s2));

    assert(src == mi_strcpy(dest, src));


}