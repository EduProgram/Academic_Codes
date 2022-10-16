#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco;
    printf("Valor do preco: ");
    scanf ("%f", &preco);
    if (preco < 2)
    printf ("Valor do produto: %.2f", preco + 0.15);
        if ((preco >= 2)&&(preco < 5))
        printf ("Valor do produto: %.2f", (((preco - 2) * 0.02)) + 0.15 + preco);
            if ((preco >= 5)&&(preco < 20))
            printf ("Valor do produto: %.2f", (((preco - 5) * 0.10) + ((5 - 2) * 0.02)) + 0.15 + preco);
                if (preco > 20)
                printf ("Valor do produto: %.2f", (((((preco - 20)) * 0.08) + ((20 - 5) * 0.10)) + ((5 - 2) * 0.02)) + 0.15 + preco);
    return 0;
}
