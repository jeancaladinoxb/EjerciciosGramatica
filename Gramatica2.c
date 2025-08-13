#include <stdio.h>
#include <string.h>

int gramatica2(char *cadena){
    int num_a = 0, num_b = 0;
    int len = strlen(cadena);

     int fase_b = 0; // 0 = aún en 'a', 1 = en 'b'
    for (int i = 0; i < len; i++) {
        if (cadena[i] == 'a') {
            if (fase_b) return 0; // 'a' después de 'b'
            num_a++;
        } else if (cadena[i] == 'b') {
            fase_b = 1;
            num_b++;
        } else {
            return 0; // Caracter no válido
        }
    }
       // Verificar que num_b = num_a + 1
    return num_b == num_a + 1;

}
 int main(){

    FILE *archivo;
    char cadena[100];
    archivo = fopen("G2.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;       
    }
      while (fscanf(archivo, "%s", cadena) != EOF) {
        if (gramatica2(cadena))
            printf("%s: acepta\n", cadena);
        else
            printf("%s: NO acepta\n", cadena);
    }

    fclose(archivo);
    return 0;
}
