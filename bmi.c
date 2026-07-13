#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Según estimaciones recientes, dos tercios de las personas en los Estados Unidos tienen sobrepeso y aproximadamente la mitad de ellas son obesas. Esto causa aumentos significativos en enfermedades como diabetes y enfermedades del corazón. Para determinar si una persona tiene sobrepeso u obesidad, puede usar una medida llamada índice de masa corporal (Body Mass Index - BMI).\n");

    do {
        printf("\nIngrese su peso en kg: ");
        scanf("%f", &peso);

        if (peso <= 0) {
            printf("Error: El peso debe ser un numero positivo.\n");
        }

    } while (peso <= 0);

    do {
        printf("Ingrese su altura en metros: ");
        scanf("%f", &altura);

        if (altura <= 0) {
            printf("Error: La altura debe ser un numero positivo.\n");
        }

    } while (altura <= 0);

    imc = peso / (altura * altura);

    printf("\nSu IMC es: %.2f\n", imc);

    printf("\nTabla de referencia:\n");
    printf("---------------------------------\n");
    printf("Menor a 18.5      : Bajo peso\n");
    printf("18.5 a 24.9       : Peso normal\n");
    printf("25.0 a 29.9       : Sobrepeso\n");
    printf("30.0 o mas        : Obesidad\n");

    printf("\nSegun su IMC, usted se encuentra en la categoria: ");

    if (imc < 18.5) {
        printf("Bajo peso\n");
    } else if (imc < 25.0) {
        printf("Peso normal\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidad\n");
    }

    return 0;
}
    
//https://github.com/benzmorena9-svg/Inform.git
