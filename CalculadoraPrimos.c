#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Ingresa un número entero: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("El número no es primo.\n");
        return 0;
    }
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }

    if (contador == 2) {
        printf("Es un numero primo.\n");
    } else {
        printf("El número no es primo.\n");
    }
    return 0;
}
