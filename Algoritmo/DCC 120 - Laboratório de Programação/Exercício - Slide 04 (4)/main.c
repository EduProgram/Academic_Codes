#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z;
    printf("Digite valor de X: ");
    scanf ("%f", &x);
    printf ("Digite valor de Y: ");
    scanf ("%f", &y);
    printf ("Digite valor de Z: ");
    scanf ("%f", &z);

    if (x < y + z && y < x + z && z < x + y)
        printf ("Estes valores formam os lados de um triangulo");
    else
        printf ("Estes valores NAO formam os lados de um triangulo");
    return 0;
}
