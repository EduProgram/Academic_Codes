#include <stdio.h>
#include <stdlib.h>

int main()
{
    int elemento = 1, valor, menor, maior;
    printf("Digite 10 valores\n");
    printf("%io valor: ", elemento);
    scanf("%i", &valor);
    maior = 0;
    menor = elemento;
    for ( elemento = 2; elemento <= 10; elemento ++)
    {
        printf("%io valor: ", elemento);
        scanf("%i", &valor);
        if (valor > maior)
            maior = elemento;
        if (valor < menor)
            menor = elemento;
    }
    printf("O %io elemento eh o maior\n", maior);
    printf("O %io elemento eh o menor", menor);
    return 0;
}
