#include <stdio.h>
#include <stdlib.h>

void NumeroSemana (int n)
{
    switch (n)
    {
        case 1: printf ("\nDomingo");
                break;
        case 2: printf ("\nSegunda");
                break;
        case 3: printf ("\nTerca");
                break;
        case 4: printf ("\nQuarta");
                break;
        case 5: printf ("\nQuinta");
                break;
        case 6: printf ("\nSexta");
                break;
        case 7: printf ("\nSabado");
        default: printf ("\nDia da semana invalido");
    }
}
int main()
{
    int numero;
    printf ("Digite um numero que represente o dia da semana: ");
    scanf ("%i", &numero);
    NumeroSemana (numero);
    return 0;
}
