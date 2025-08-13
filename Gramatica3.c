#include <stdio.h>
#include <string.h>

int Gramatica3(char *cadena) {
    int num_a = 0, num_b = 0;
    int len = strlen(cadena);
    int fase_b = 0; // 0 = aun en 'a', 1 = en 'b'
    
    for (int i = 0; i < len; i++) {
        if (cadena[i] == 'a') {
            if (fase_b) return 0; // 'a' después de 'b'
            num_a++;
        } else if (cadena[i] == 'b') {
            fase_b = 1;
            num_b++;
        } else {
            return 0; // Caracter inválido
        }
    }

    // Condición: n > 0 y num_b = num_a + 1
    return (num_a > 0) && (num_b == num_a + 1);
}

int main() {
    FILE*archivo;
    char cadena[100];
    archivo = fopen("G3.txt","r");
    if (archivo ==NULL){
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    while (fscanf(archivo, "%s", cadena) != EOF) {
        if (Gramatica3(cadena))
            printf("%s: Acepta\n", cadena);
        else
            printf("%s: No acepta\n", cadena);
    }
}
