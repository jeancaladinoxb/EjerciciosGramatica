#include <stdio.h>
#include <string.h>

int gramatica1(char *cadena) {
    int len = strlen(cadena);

    // Verificar que solo tenga 0 y 1
    for (int i = 0; i < len; i++) {
        if (cadena[i] != '0' && cadena[i] != '1')
            return 0;
    }

    // Verificar que sea palíndromo
    for (int i = 0; i < len / 2; i++) {
        if (cadena[i] != cadena[len - i - 1])
            return 0;
    }
    return 1;
}

int main() {
    FILE *archivo;
    char cadena[100];

    archivo = fopen("G1.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    while (fscanf(archivo, "%s", cadena) != EOF) {
        if (gramatica1(cadena))
            printf("%s: acepta\n", cadena);
        else
            printf("%s: NO acepta\n", cadena);
    }

    fclose(archivo);
    return 0;
}
