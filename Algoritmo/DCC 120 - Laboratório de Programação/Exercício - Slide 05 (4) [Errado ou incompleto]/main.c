#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Numero da loja, numero de itens, valor do item
    int nj, ni, vi, cont;
    printf("Gastos mensais de Ana\n\n");
    printf("Numero da loja: ");
    scanf("%i", &nj);
    printf("Numero de itens comprados nessa loja: ");
    scanf("%i", &ni);

    cont = ni - (ni - 1);

    while ( ni >= cont)
    {
        printf("Valor do item %i: ", cont);
        scanf("%i", &vi);
        cont ++;
    }

    return 0;
}
