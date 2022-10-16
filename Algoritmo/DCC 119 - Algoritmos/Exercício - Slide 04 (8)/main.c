#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;
    printf("Didite o codigo do produto: ");
    scanf ("%i", &codigo);
    if ((codigo >= 1)&&(codigo <= 20))
    printf ("Europa");
    else
    {
        if ((codigo >= 21)&&(codigo <= 40))
        printf ("Asia");
        else
        {
            if ((codigo >= 41)&&(codigo <= 60))
            printf ("America");
            else
            {
                if ((codigo >= 61)&&(codigo <= 80))
                printf ("Africa");
                else
                {
                    if (codigo > 80)
                    printf ("Paraguay");
                    else
                    printf ("Codigo invalido");
                }

            }
        }
    }
    return 0;
}
