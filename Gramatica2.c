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

    char cadena[100];
     printf("Ingrese una cadena: ");
     scanf("%s", cadena);

     if (gramatica2(cadena))
        printf("acepta\n");
    else
        printf("No acepta\n");

    return 0;
}