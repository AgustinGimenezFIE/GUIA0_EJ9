#include <stdio.h>
/* 9 Defina una función que calcule la longitud de una cadena de caracteres. */
int longitudCadena(char cadena[]) {
    int longitud = 0;
    while (cadena[longitud] != '\0') {
        longitud++;
    }
    return longitud;
}

int main() {
    char str[] = "Hola mundo!";
    int len = longitudCadena(str);
    printf("La longitud de la cadena es : %d\n", len);
    return 0;
}
