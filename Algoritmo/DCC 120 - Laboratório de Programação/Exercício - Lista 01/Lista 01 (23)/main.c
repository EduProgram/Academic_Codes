#include <stdio.h>
#include <stdlib.h>

int funcao (int n1, int n2)
{
    if (n1 <= n2)
    {
        while (n1 % 2 =! 0)
            printf("%i\n", n1)
            n1++;
    }
    if (n2 <= n1)
    {
        while (n2 % 2 =! 0)
            printf("%i\n", n2);
            n2++;
    }
    return
}
int main()
{
    int numero1, numero2, funcao;
    printf("Digite um numero: ");
    scanf("%i", &numero1);
    printf("%i", &numero2);
    funcao (numero1, numero2);

    return 0;
}
