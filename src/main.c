#include <stdio.h>

int main() {
    float lado, area, volumen;

    printf("Ingresa la longitud del lado: ");
    scanf("%f", &lado);

    area = lado * lado;
    volumen = lado * lado * lado;

    printf("El area del cuadrado es: %.2f\n", area);
    printf("El volumen del cubo es: %.2f\n", volumen);

    return 0;
}
//

