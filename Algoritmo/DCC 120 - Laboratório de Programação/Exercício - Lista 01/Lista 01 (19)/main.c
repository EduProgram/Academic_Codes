#include <stdio.h>
#include <stdlib.h>

void funcao_n (int n)
{
    int cont;
    cont = 1;
    while (cont <= n)
    {
        printf("%i x %i = %i\n", cont, n, cont * n);
        cont ++;
    }
}
int main()
{
    int numero;
    printf("Digite um valor N: ");
    scanf("%i", &numero);
    funcao_n (numero);
    return 0;
}
