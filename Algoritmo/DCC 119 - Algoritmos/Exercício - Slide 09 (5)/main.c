#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} ponto;

float funcao_dist (ponto p1, ponto p2)
{
    float dist;
    dist = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    return dist;
}

int main()
{
    ponto p1, p2;
    float distancia;
    printf("Digite a coordenada X do ponto 1: ");
    scanf("%i", &p1.x);
    printf("Digite a coordenada Y do ponto 1: ");
    scanf("%i", &p1.y);
    printf("Digite a coordenada X do ponto 2: ");
    scanf("%i", &p2.x);
    printf("Digite a coordenada X do ponto 2: ");
    scanf("%i", &p2.y);
    distancia = funcao_dist(p1, p2);

    printf("Distancia entre os pontos = %f", distancia);
    return 0;
}
