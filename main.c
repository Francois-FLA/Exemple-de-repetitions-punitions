#include <stdio.h>
#include <stdlib.h>

void punition (int nombre)
{
    int i;
    for (i = 0; i < nombre; i++ )
    {
            printf("Je ne dois pas copier sur moin voisin !\n");
    }
}

int main()
{
    int nombre = 0;

    printf("Combien de fois ?\n");
    scanf("%d", &nombre);
    punition(nombre);

    return 0;
}
