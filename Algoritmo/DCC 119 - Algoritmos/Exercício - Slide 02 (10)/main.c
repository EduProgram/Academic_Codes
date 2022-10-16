#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias, horas , minutos, segundos;
    printf("Digite o valor dos segundos:");
    scanf ("%i", &segundos);
    printf ("\nHoras:%i",(segundos / 60) / 60);
    printf ("\nMinutos:%i", segundos / 60);
    printf ("\nSegundos:%i", segundos);
    return 0;
}
