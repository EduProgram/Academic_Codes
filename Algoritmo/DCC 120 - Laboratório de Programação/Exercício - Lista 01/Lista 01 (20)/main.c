#include <stdio.h>
#include <stdlib.h>

void funcao_valores (int n1, int n2)
{
    if (n1 < n2)
    {
        while (n1 <= n2)
        {
            printf("%i", n2);
            n2--;
        }
    }
    else
    {
        while (n2 <= n1)
        {
            printf("%i", n1);
            n1--;
        }
    }
}
int main()
{
    int numero1, numero2;
    printf("Digite um valor: ");
    scanf ("%i", &numero1);
    printf("Digite outro: ");
    scanf("%i", &numero2);
    funcao_valores (numero1, numero2);
    return 0;
}
