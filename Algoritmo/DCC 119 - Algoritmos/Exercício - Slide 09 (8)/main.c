#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[100];
    int idade;
} Pessoa;

int main()
{
    Pessoa p1, p2, p3;
    printf("Escreva o nome de uma pessoa: ");
    gets(p1.nome);
    printf("Digite a idade da respectiva pessoa: ");
    scanf("%i%*c", &p1.idade);
    printf("Escreva o nome de outra pessoa: ");
    gets(p2.nome);
    printf("Digite a idade da respectiva pessoa: ");
    scanf("%i%*c", &p2.idade);
    printf("Escreva o nome de uma terceira pessoa: ");
    gets(p3.nome);
    printf("Digite a idade da respectiva pessoa: ");
    scanf("%i", &p3.idade);

    if (p1.idade > p2.idade && p1.idade > p3.idade)
    {
        printf("Nomes das pessoas em ordem de idade:\n");
        if (p2.idade > p3.idade)
            puts(p3.nome), puts(p2.nome), puts(p1.nome);
        else
            puts(p2.nome), puts(p3.nome), puts(p1.nome);
    }
    if (p2.idade > p1.idade && p2.idade > p3.idade)
    {
        printf("Nomes das pessoas em ordem de idade:\n");
        if (p1.idade > p3.idade)
            puts(p3.nome), puts(p1.nome), puts(p2.nome);
        else
            puts(p1.nome), puts(p3.nome), puts(p2.nome);
    }
    if (p3.idade > p2.idade && p3.idade > p1.idade)
    {
        printf("Nomes das pessoas em ordem de idade:\n");
        if (p2.idade > p1.idade)
            puts(p1.nome), puts(p2.nome), puts(p3.nome);
            else
            puts(p2.nome), puts(p1.nome), puts(p3.nome);
    }
    return 0;
}
