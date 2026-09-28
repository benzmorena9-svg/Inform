#include <stdio.h>

#define PI 3.14159265

float AreaRectangulo(float longitud, float altura);
float PerimetroRectangulo(float longitud, float altura);
float AreaCirculo(float radio);
float PerimetroCirculo(float radio);
void Resultados(float area, float perimetro);

int main() {
    int opcion;
    float longitud, altura, radio;
    float area, perimetro;
    int opcionValida = 0;

    /* Menú con validación de opción */
    do {
        printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo): ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            opcionValida = 1;
            printf("Opcion de rectangulo seleccionada\n");

            printf("Ingrese la longitud del rectangulo: ");
            scanf("%f", &longitud);
            printf("Ingrese la altura del rectangulo: ");
            scanf("%f", &altura);

            area = AreaRectangulo(longitud, altura);
            perimetro = PerimetroRectangulo(longitud, altura);

            Resultados(area, perimetro);

        } else if (opcion == 2) {
            opcionValida = 1;
            printf("Opcion de circulo seleccionada\n");

            printf("Ingrese el radio del circulo: ");
            scanf("%f", &radio);

            area = AreaCirculo(radio);
            perimetro = PerimetroCirculo(radio);

            Resultados(area, perimetro);

        } else {
            printf("Opcion invalida. Por favor, ingrese 1 o 2.\n");
        }

    } while (!opcionValida);

    return 0;
}

/* Calcula el área de un rectángulo */
float AreaRectangulo(float longitud, float altura) {
    return longitud * altura;
}

/* Calcula el perímetro de un rectángulo */
float PerimetroRectangulo(float longitud, float altura) {
    return 2 * (longitud + altura);
}

/* Calcula el área de un círculo */
float AreaCirculo(float radio) {
    return PI * radio * radio;
}

/* Calcula el perímetro (circunferencia) de un círculo */
float PerimetroCirculo(float radio) {
    return 2 * PI * radio;
}

/* Imprime en pantalla el área y el perímetro calculados */
void Resultados(float area, float perimetro) {
    printf("El area de la figura es: %.2f\n", area);
    printf("El perimetro de la figura es: %.2f\n", perimetro);
}