#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int peso;
    float altura;
} Medidas;

int main()
{
    Medidas p1, p2, p3, p4, p5, p6;
    float media_Alt = 0, media_Peso = 0;
    printf("Digite o peso da pessoa 1: ");
    scanf("%i", &p1.peso);
    printf("Digite a altura da mesma pessoa: ");
    scanf("%f", &p1.altura);
    printf("\nDigite o peso da pessoa 2: ");
    scanf("%i", &p2.peso);
    printf("Digite a altura da mesma pessoa: ");
    scanf("%f", &p2.altura);
    printf("\nDigite o peso da pessoa 3: ");
    scanf("%i", &p3.peso);
    printf("Digite a altura da mesma pessoa: ");
    scanf("%f", &p3.altura);
    printf("\nDigite o peso da pessoa 4: ");
    scanf("%i", &p4.peso);
    printf("Digite a altura da mesma pessoa: ");
    scanf("%f", &p4.altura);
    printf("\nDigite o peso da pessoa 5: ");
    scanf("%i", &p5.peso);
    printf("Digite a altura da mesma pessoa: ");
    scanf("%f", &p5.altura);
    printf("\nDigite o peso da pessoa 6: ");
    scanf("%i", &p6.peso);
    printf("Digite a altura da mesma pessoa: ");
    scanf("%f", &p6.altura);

    media_Alt = (p1.altura + p2.altura + p3.altura + p4.altura + p5.altura + p6.altura) / 6;
    media_Peso = (p1.peso + p2.peso + p3.peso + p3.peso + p4.peso + p5.peso + p6.peso) / 6;

    printf("\n\nMedia da altura = %.2f", media_Alt);
    printf("\nMedia do peso = %.1f", media_Peso);
    return 0;
}
