#include <stdio.h>
#include <stdlib.h>

float nota_neces (float n1, float n2)
{
    float n1_2 = n1 + n2;
    float nota_neces =  (20 - n1_2) / 2;
    return nota_neces;
}
int main()
{
    float p1, p2, p3;
    printf ("Calculo de nota para aprovacao");
    printf ("\nNota da primeira prova: ");
    scanf ("%f", &p1);
    printf ("Nota da segunda prova: ");
    scanf ("%f", &p2);
    p3 = nota_neces (p1, p2);
    printf ("Nota necessaria:%.2f", p3);
     ("%.2f", &p3);
    return 0;
}
