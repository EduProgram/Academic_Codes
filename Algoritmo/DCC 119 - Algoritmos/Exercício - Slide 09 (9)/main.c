#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    char tipo[15];
    float nota;
} Restaurante;

int main()
{
    Restaurante r1, r2, r3; ///numero definido pelo programador
    printf("Digite o nome de um restaurante: ");
    gets(r1.nome);
    printf("Digite o tipo de comida do mesmo: ");
    gets(r1.tipo);
    printf("Digite a nota do mesmo (de 0 a 5): ");
    scanf("%f%*c", &r1.nota);
    printf("Digite o nome de outro restaurante: ");
    gets(r2.nome);
    printf("Digite o tipo de comida do mesmo: ");
    gets(r2.tipo);
    printf("Digite a nota do mesmo (de 0 a 5): ");
    scanf("%f%*c", &r2.nota);
    printf("Digite o nome de mais um restaurante: ");
    gets(r3.nome);
    printf("Digite o tipo de comida do mesmo: ");
    gets(r3.tipo);
    printf("Digite a nota do mesmo (de 0 a 5): ");
    scanf("%f%*c", &r3.nota);

    printf("\nLista de todos os restaurantes:\n");
    puts(r1.nome), puts(r2.nome), puts(r3.nome);
    printf("\nTipo de comida do restaurante com maior nota: ");

    if (r1.nota > r2.nota && r1.nota > r3.nota)
    {
        puts(r1.tipo);
    }
    if (r2.nota > r1.nota && r2.nota > r3.nota)
    {
        puts(r2.tipo);
    }
    if (r3.nota > r2.nota && r3.nota > r1.nota)
    {
        puts(r3.tipo);
    }
    return 0;
}
