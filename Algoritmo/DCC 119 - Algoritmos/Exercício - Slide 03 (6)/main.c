#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distancia_pontos (float xa, float ya, float xb, float yb)
{
    float d;
    d = sqrt ((pow(xa - xb, 2)) + (pow(ya - yb, 2)));
    return d;
}

int main()
{
    float x1, x2, y1, y2, x3, y3, d1, d2, d3, perimetro;
    printf("Valor de X1 e Y1: ");
    scanf ("%f %f", &x1, &y1);
    printf ("Valor de X2 e Y2: ");
    scanf ("%f %f", &x2, &y2);
    printf ("Valor de X3 e Y3: ");
    scanf ("%f %f", &x3, &y3);
    d1 = distancia_pontos (x1, y1, x2, y2);
    printf ("Distancia entre ponto 1 e ponto 2: %.1f", d1);
    d2 = distancia_pontos (x2, y2, x3, y3);
    printf ("\nDistancia entre ponto 2 e ponto 3: %.1f", d2);
    d3 = distancia_pontos (x1, y1, x3, y3);
    printf ("\nDistancia entre ponto 1 e ponto 3: %.1f", d3);
    perimetro = d1 + d2 + d3;
    printf ("\nValor do perimetro do triangulo: %.1f", perimetro);
    return 0;
}
