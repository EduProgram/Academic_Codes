#include <stdio.h>
#include <stdlib.h>

void classificaNadador (int idade)
{
    if (idade >= 5 && idade <= 7)
    printf ("Categoria: Infantil A");
        if (idade >= 8 && idade <= 10)
        printf ("Categoria: Infantil B");
            if (idade >= 11 && idade <= 13)
            printf ("Categoria: Juvenil A");
                if (idade >= 14 && idade <= 17)
                printf ("Categoria: Juvenil B");
                    if (idade >= 18 && idade < 30)
                    printf ("Categoria: Adulto");
                        if (idade >= 30)
                        printf ("Categoria: Senior");
}
int main()
{
    int idade;
    printf("Diditar a idade do nadador: ");
    scanf ("%i", &idade);
    classificaNadador (idade);
    return 0;
}
