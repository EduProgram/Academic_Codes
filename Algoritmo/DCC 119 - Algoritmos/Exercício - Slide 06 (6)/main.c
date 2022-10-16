#include <stdio.h>
#include <stdlib.h>
#define tamanho 10

int main()
{
    int i;
    float vetor[tamanho], vetor_1[tamanho], vetor_2[tamanho], soma, media;
    soma = 0;
    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o valor do vetor[%i]: ", i);
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    }
    media = soma / tamanho;
    printf("\nValor(es) do(s) elemento(s) acima da media: ");
    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] > media)
        {
            printf("%.2f, ", vetor[i]);
        }
    }
    printf("\nValor(es) do(s) elemento(s) abaixo da media: ");
    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] < media)
        {
            printf("%.2f, ", vetor[i]);
        }
    }
    return 0;
}
