#include <stdio.h>
#include <stdlib.h>

void funcao_duplas (int n)
{
    int cont;
    cont = 1;
    while (cont <= n - cont)
    {
        printf("%i e %i\n", cont, (n - cont + 1));
        cont ++;
    }
    if (cont >= n)
    printf("%i", cont + 1);
}
int main()
{
    int numero;
    printf("Numero de alunos: ");
    scanf("%i", &numero);
    funcao_duplas (numero);
    return 0;
}
