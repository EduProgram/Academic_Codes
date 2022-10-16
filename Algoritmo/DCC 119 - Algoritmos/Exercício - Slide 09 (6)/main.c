#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} ponto;

float funcao_prox (ponto p1, ponto p2)
{
    float prox, dist_p1, dist_p2;
    dist_p1 = sqrt(pow(p1.x, 2) + pow(p1.y, 2));
    dist_p2 = sqrt(pow(p2.x, 2) + pow(p2.y, 2));

    if (dist_p1 < dist_p2)
        prox = 1;
    if (dist_p2 < dist_p1)
        prox = 2;
    return prox;
}

int main()
{
    ponto p1, p2;
    float proximo;
    printf("Digite a coordenada X do ponto 1: ");
    scanf("%i", &p1.x);
    printf("Digite a coordenada Y do ponto 1: ");
    scanf("%i", &p1.y);
    printf("Digite a coordenada X do ponto 2: ");
    scanf("%i", &p2.x);
    printf("Digite a coordenada X do ponto 2: ");
    scanf("%i", &p2.y);
    proximo = funcao_prox (p1, p2);

    printf("\nO ponto mais proximo da origem eh o %f", proximo);
    return 0;
}
