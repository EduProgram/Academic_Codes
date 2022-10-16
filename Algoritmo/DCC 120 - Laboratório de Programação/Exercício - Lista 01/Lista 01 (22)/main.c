#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1000;
    printf("Numeros entre 1000 e 1999\n");
    printf("Que divididos por 11\n");
    printf("Dão resto igual a 5\n");
    while (n <= 1999)
    {
        if (n % 11 == 5)
            printf("%i\n", n);
        n ++;
    }
    return 0;
}
