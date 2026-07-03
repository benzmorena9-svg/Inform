#include <stdio.h>

int main() {
    float nota;

    printf("Ingrese la calificación: ");
    scanf("%f", &nota);

    if (nota >= 90) {
        printf("Calificación: A\n");
    } else if (nota >= 80) {
        printf("Calificación: B\n");
    } else if (nota >= 70) {
        printf("Calificación: C\n");
    } else if (nota >= 60) {
        printf("Calificación: D\n");
    } else {
        printf("Calificación: F\n");
    }

    return 0;
}