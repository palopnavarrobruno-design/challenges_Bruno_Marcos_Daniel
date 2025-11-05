#include <stdio.h>
#include <stddef.h>

int pruebas();

size_t mi_strlen(const char *s) {

    size_t i = 0;

    while(s[i] != '\0') {

        i++;

    }

    return i;

}

int mi_strcmp(const char *s1, const char *s2) {

    int e = 0;
    int status = 0;

    while(s1[e] != '\0') {

        if(s1[e] != s2[e]) {

            status = 1;

        }

        e++;

    }

    return status;


}


char *mi_strcpy(char *dest, const char *src) {

    int i = 0;

    while(src[i] != '\0') {

        dest[i] = src[i];

        i++;

    }

    dest[i] = '\0';

    printf("%s", dest);
    return dest;

}


int main() {
    
    pruebas();
    
    return 0;
}
