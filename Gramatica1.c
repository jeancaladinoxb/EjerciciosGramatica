#include <stdio.h>
#include <string.h>

int gramatica1(char *cadena){
    int len = strlen(cadena);

    //verificar que cumpla la condición de 0 y 1

    for (int i =0; i<len; i++){
        if (cadena[i] != '0' && cadena[i] != '1')
            return 0;
    }

    for (int i = 0; i < len / 2; i++){


        if (cadena [i] != cadena[len -i - 1])
            return 0;

    }
    return 1;

}

int main() {
 char cadena[100];
    printf("Ingrese una cadena: ");
    scanf("%s", cadena);


    if (gramatica1(cadena)) {
        printf("Acepta\n");
    } else {
        printf("No acepta.\n");

        return 0;
    }

}