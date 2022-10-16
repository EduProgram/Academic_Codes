#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Sal_Min, Sal_Funci, Razao_Salarial;
    printf ("Digite o salario minimo:");
    scanf ("%f", &Sal_Min);
    printf ("Digite o salario de funcionario:");
    scanf ("%f", &Sal_Funci);
    Razao_Salarial = Sal_Funci / Sal_Min;
    printf ("Quantos salarios minimos o funcionario ganha: %f", Razao_Salarial);
    return 0;
}
