#include <stdio.h>
#include <string.h>

int gramatica5(char* cadena) {
    int len = strlen(cadena);
    
    if (len < 2) return 0;
    
    if (cadena[0] != 'a' || cadena[len-1] != 'b') return 0;
    
    int middle_len = len - 2;
    
    if (middle_len % 2 != 0) return 0;
    
    for (int i = 1; i < len-1; i += 2) {
        if (cadena[i] != 'a' || cadena[i+1] != 'b') {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    FILE *archivo = fopen("G5.txt", "r");
    char cadena[100];
    
    while (fgets(cadena, sizeof(cadena), archivo)) {
        cadena[strcspn(cadena, "\n")] = 0;
        
        if (gramatica5(cadena)) {
            printf("%s: Acepta\n", cadena);
        } else {
            printf("%s: No acepta\n", cadena);
        }
    }
    
    fclose(archivo);
    return 0;
}