#include <stdio.h>
#include <stdlib.h>
#define tamanho 8
int main()
{
    int i, aluno, aluno_recebe;
    float vetor[tamanho], soma[tamanho];
    for (i = 0; i < tamanho; i++)
    {
        soma[i] = 0;
    }
    for (aluno = 1; aluno <= tamanho; aluno++)
    {
        printf("\nEstudante %i\n", aluno);

        for (i = 0; i < tamanho; i++)
        {
            printf("Nota para o estudante %i: ", (i + 1) + aluno); ///Faltou resolver a numeração dos alunos de recebem as notas de forma melhor
            scanf("%f", vetor[i]);

            if (vetor[i] > 0 && vetor[i] <= 0)
            {
                soma[i] = soma[i] + vetor[i];
            }
            else
            {
                printf("\nNota invalida!");
            }
        }
        for (i = 0; i < tamanho; i++)
        {
            printf("\nMedia do aluno %i: %f", aluno, soma[i] / tamanho);
        }
    }
    return 0;
}
