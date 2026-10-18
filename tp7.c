//https://github.com/benzmorena9-svg/Inform.git

#include <stdio.h>

#define TAM 5

int main(void)
{
    int codigos[TAM];
    float precios[TAM];
    int i;
    int codigo;
    float precio;

    printf("Ingrese %d productos, se solicitara el codigo y precio:\n", TAM);

    for (i = 0; i < TAM; i++)
    {
        do
        {
            printf("Ingrese el codigo de barras (1-999999999): ");
            scanf("%d", &codigo);

            if (codigo < 1 || codigo > 999999999)
            {
                printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
            }
        } while (codigo < 1 || codigo > 999999999);

        do
        {
            printf("Ingrese el precio: ");
            scanf("%f", &precio);

            if (precio < 0)
            {
                printf("Error. El precio no puede ser negativo\n");
            }
        } while (precio < 0);

        codigos[i] = codigo;
        precios[i] = precio;
    }
    printf("\nCodigo\t\tPrecio\n");
    for (i = 0; i < TAM; i++)
    {
        printf("%9d\t%10.2f\n", codigos[i], precios[i]);
    }

    int posMayor = 0;
    int posMenor = 0;

    for (i = 1; i < TAM; i++)
    {
        if (precios[i] > precios[posMayor])
        {
            posMayor = i;
        }
        if (precios[i] < precios[posMenor])
        {
            posMenor = i;
        }
    }

    printf("\nMas caro: [%d] %.2f\n", codigos[posMayor], precios[posMayor]);
    printf("Mas barato: [%d] %.2f\n", codigos[posMenor], precios[posMenor]);

    return 0;
}