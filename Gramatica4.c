#include <stdio.h>
#include <string.h>


int gramatica4(char *cadena) {
    // El lenguaje L(G4) solo acepta "ab" y "abb"
    return (strcmp(cadena, "ab") == 0 || strcmp(cadena, "abb") == 0);
}

int main() {
    FILE*archivo;
    char cadena[100];
    archivo = fopen("G4.txt","r");
    if (archivo ==NULL){
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    while (fscanf(archivo, "%s", cadena) != EOF) {
        if (gramatica4(cadena))
            printf("%s: Acepta\n", cadena);
        else
            printf("%s: No acepta\n", cadena);
    }
}
