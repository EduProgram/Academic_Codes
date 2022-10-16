#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    int x;
    int y;
} ponto;

int main()
{
    ponto p1, p2, p3, p4;
    int prox_X, prox_Y;
    float proximo;
    float dist_p1, dist_p2, dist_p3, dist_p4;
    printf("Digite a coordenada X do ponto 1: ");
    scanf("%i", &p1.x);
    printf("Digite a coordenada Y do ponto 1: ");
    scanf("%i", &p1.y);
    printf("Digite a coordenada X do ponto 2: ");
    scanf("%i", &p2.x);
    printf("Digite a coordenada X do ponto 2: ");
    scanf("%i", &p2.y);
    printf("Digite a coordenada X do ponto 3: ");
    scanf("%i", &p3.x);
    printf("Digite a coordenada Y do ponto 3: ");
    scanf("%i", &p3.y);
    printf("Digite a coordenada X do ponto 4: ");
    scanf("%i", &p4.x);
    printf("Digite a coordenada Y do ponto 4: ");
    scanf("%i", &p4.y);
    dist_p1 = sqrt(pow(p1.x, 2) + pow(p1.y, 2));
    dist_p2 = sqrt(pow(p2.x, 2) + pow(p2.y, 2));
    dist_p3 = sqrt(pow(p3.x, 2) + pow(p3.y, 2));
    dist_p4 = sqrt(pow(p4.x, 2) + pow(p4.y, 2));

    if (dist_p1 < dist_p2 && dist_p1 < dist_p3 && dist_p1 < dist_p4)
    {
        prox_X = p1.x;
        prox_Y = p1.y;
    }
    if (dist_p2 < dist_p1 && dist_p2 < dist_p3 && dist_p2 < dist_p4)
    {
        prox_X = p2.x;
        prox_Y = p2.y;
    }
    if (dist_p3 < dist_p1 && dist_p3 < dist_p2 && dist_p3 < dist_p4)
    {
        prox_X = p3.x;
        prox_Y = p3.y;
    }
    if (dist_p4 < dist_p1 && dist_p4 < dist_p2 && dist_p4 < dist_p3)
    {
        prox_X = p4.x;
        prox_Y = p4.y;
    }

    printf("\nCoordenadas do ponto mais proximo da origem: (%i, %i)", prox_X, prox_Y);
    return 0;
}
