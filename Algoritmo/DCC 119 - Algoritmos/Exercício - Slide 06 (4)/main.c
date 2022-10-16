#include <stdio.h>
#include <stdlib.h>
#define tamanho 100

int main()
{
    int t, i;
    float vetor_1[tamanho], vetor_2[tamanho], vetor_3[tamanho];
    printf("Digite o tamanho dos vetores: ");
    scanf("%i", &t);
    for (i = 0; i < t; i++)
    {
        printf("Digite o valor do primeiro vetor[%i]: ", i);
        scanf("%f", &vetor_1[i]);
    }
    for (i = 0; i < t; i++)
    {
        printf("Digite o tamanho do segundo vetor[%i]: ", i);
        scanf("%f", &vetor_2[i]);
    }
    for (i = 0; i < t; i++)
    {
        printf("\nValor do terceiro vetor[%i]: %.2f", i, vetor_1[i] + vetor_2[i]);
    }
    return 0;
}
