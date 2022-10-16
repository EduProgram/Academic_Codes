#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio = 3.0, altura = 12.0, pi = 3.1415;
    printf("valor raio: %f", raio);
    printf ("\nvalor altura: %f", altura);
    printf ("\n\ncalcular area da base: %f", (raio * raio) * pi);
    printf ("\ncalcular volume: %f", (raio * raio) * pi * altura);
    return 0;
}
