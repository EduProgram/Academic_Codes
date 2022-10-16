#include <stdio.h>
#include <stdlib.h>

int main()
{
    int celsius, fahrenheit;
    printf ("Digite a temperatura em celsius:");
    scanf ("%i", &celsius);
    fahrenheit = (9 * celsius + 160) / 5;
    printf ("\nConvertido em Fahrenheit: %i", fahrenheit);

}
