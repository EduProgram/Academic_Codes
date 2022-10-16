#include <stdio.h>
#include <stdlib.h>
///Quando eu coloco o n1 = 1 e o n2 = 10 e o x = 5, a função acaba repetindo o número 10, e isso é um erro
void funcao (int n1, int n2, int x)
{
   if (x < n2);
   {
       while (n1 <= n2)
       {
           if (n1 % x == 0)
           printf("%i\n", n1);
        n1++;
       }
    if (x < n1)
    {
        while (n2 <= n1)
        {
            if (n2 % x == 0)
            printf("%i\n", n2);
        n2++;
        }
    }
   }
}
int main()
{
    int numero1, numero2, X;
    printf("Digite um numero: ");
    scanf("%i", &numero1);
    printf("Digite outro numero: ");
    scanf("%i", &numero2);
    printf("Digite um valor X: ");
    scanf("%i", &X);
    funcao (numero1, numero2, X);
    return 0;
}
