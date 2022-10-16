#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1, lado2;
    printf ("TRIANGULO\n");
    printf ("Digite os lados:");
    scanf ("%f%f", &lado1,&lado2);
    printf ("Perimetro:%f", lado1 + lado2 + lado2);
    return 0;
}
