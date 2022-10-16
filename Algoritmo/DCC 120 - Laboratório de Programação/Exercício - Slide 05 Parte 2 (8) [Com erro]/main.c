#include <stdio.h>
#include <stdlib.h>

int funcao_Fibonacci ()
{
    int N, f, f_total = 0, cont;
    printf("Digite o numero de termos: ");
    scanf("%i", &N);
    for (cont = 1; cont <= N; cont++)
    {
        f = cont;
        f_total = f_total + f;
    }
    return f_total;
}
int main()
{
    int funcao;
    funcao = funcao_Fibonacci();
    printf("Valor do ultimo termo: %i", funcao);
    return 0;
}
