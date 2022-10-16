#include <stdio.h>
#include <stdlib.h>
#define tamanho 20

int main()
{
    int i, menor, ind_menor, vetor[tamanho], zero;
    zero = 0;
    printf("Digite 20 valores para o vetor\n");
    printf("Digite o valor do vetor[%i]: ", zero);
    scanf("%i", &vetor[zero]);
    menor = vetor[zero];
    for (i = 1; i < tamanho; i++)
    {
        printf("Digite o valor do vetor[%i]: ", i);
        scanf("%i", &vetor[i]);
        if (vetor[i] < menor)
        {
            ind_menor = i;
            menor = vetor[i];
        }
    }
    printf("O menor valor existente no vetor eh o vetor[%i]: %i", ind_menor, menor);
    return 0;
}
