#include <stdio.h>
#include <stdlib.h>

int leNumeroPositivo (int n)
{
    int num;
    if (n >= 0)
        return n;
    else
    {
        printf ("Digite outro valor: ");
        scanf ("%i", &num);
        if (num <= 0)
        {
           printf ("Valor invalido");
            return 0;
        }

    }

return n;
}
int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf ("%i", &numero);
    leNumeroPositivo (numero);
    if (leNumeroPositivo >= 0)
    printf ("O numero eh positivo");
    return 0;
}
