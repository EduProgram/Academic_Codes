#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto, desconto;
    printf("Valor do produto:");
    scanf ("%f", &produto);
    desconto = produto * 0.75;
    printf ("Produto com desconto de 25 por cento: %f", desconto);
    return 0;
}
