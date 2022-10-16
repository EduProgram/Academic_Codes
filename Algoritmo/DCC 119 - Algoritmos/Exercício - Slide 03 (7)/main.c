#include <stdio.h>
#include <stdlib.h>

float vd (float r)
{
    float d;
    d = 2 * r;
    return d;
}

float vc (float r)
{
    float c;
    c = 2 * 3.14159 * r;
    return c;
}

float va (float r)
{
    float a;
    a = (r * r) * 3.14159;
    return a;
}
int main()
{
    float raio;
    float diametro, circunferencia, area;
    printf("Valor do raio: ");
    scanf ("%f", &raio);
    diametro = vd (raio);
    printf ("\nValor do diametro:%f", diametro);
    circunferencia = vc (raio);
    printf ("\nValor da circunferencia:%f", circunferencia);
    area = va (raio);
    printf ("\nValor da area:%f", area);
    return 0;
}
