#include <stdio.h>
#include <stdlib.h>

float funcao_media ()
{
    int n, cont;
    float valor, media;
    media = 0;
    printf("Digite quantos valores serao digitados: ");
    scanf("%i", &n);
    for (cont = 1; cont <= n; cont++)
    {
        printf("Digite o %io valor: ", cont);
        scanf("%f", &valor);
        media = media + valor;
    }
    return media / n;
}

int main()
{
    float funcao;
    funcao = funcao_media ();
    printf("Media dos valores = %.2f", funcao);
    return 0;
}
