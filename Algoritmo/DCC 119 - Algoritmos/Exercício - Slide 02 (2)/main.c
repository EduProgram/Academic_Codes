#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias, horas , minutos, segundos = 200000;
    printf("Transfomar 200000 seg em:");
    printf ("\n\nDias:%i",(segundos / 60) / 60 / 24);
    printf ("\nHoras:%i",(segundos / 60) / 60 % 24);
    printf ("\nMinutos:%i", (segundos / 60) % 60);
    printf ("\nSegundos:%i", segundos % 60);
    return 0;
}
