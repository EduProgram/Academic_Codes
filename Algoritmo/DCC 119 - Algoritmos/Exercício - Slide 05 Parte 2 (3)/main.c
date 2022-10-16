#include <stdio.h>
#include <stdlib.h>

int funcao_fatorial ()
{
    int n, cont, fatorial;
    fatorial = 1;
    printf("Digite um valor: ");
    scanf("%i", &n);
    for (cont = n; cont > 0; cont--)
    {
        fatorial = fatorial * cont;
    }
    return fatorial;
}
int main()
{
    int funcao;
    funcao = funcao_fatorial ();
    printf("Fatorial do valor = %i", funcao);
    return 0;
}
