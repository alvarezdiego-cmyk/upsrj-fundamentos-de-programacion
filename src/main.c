#include <stdio.h>

int is_even(int num);

int main() {
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if (is_even(numero)) {
        printf("El numero es par\n");
    } else {
        printf("El numero es impar\n");
    }

    return 0; 
}

int is_even(int num) {
    if (num % 2 == 0) {
        return 1; // Es par
    } else {
        return 0; // Es impar
    }
}