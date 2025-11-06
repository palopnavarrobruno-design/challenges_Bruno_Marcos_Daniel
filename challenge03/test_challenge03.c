#include <stdio.h>
#include <assert.h>
#include <stddef.h>

#define ESTADO_IDEAL 0

size_t mi_strlen(const char *s);
int mi_strcmp(const char *s1, const char *s2);
char *mi_strcpy(char *dest, const char *src);

// Variables para hacer las pruebas
char *s = "Adios mundo cruel";

char *s1 = "Esta cadena es igual a la otra";
char *s2 = "Esta cadena es igual a la otra";

char dest[250];
char *src = "Mi moto alpina de rapante";

extern void pruebas() {


    size_t len = mi_strlen(s);
    printf("Resultado: %zu\n", len);
    assert(17 == len);

    int cmp = mi_strcmp(s1, s2);
    printf("Resultado: %d\n", cmp);
    assert(ESTADO_IDEAL == cmp);

    char *res = mi_strcpy(dest, src);
    printf("Cadena copiada: \"%s\"\n", dest);
    assert(dest == res);

}

