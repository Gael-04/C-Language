#include <stdio.h>

int main()
{
    int i, quant;
    float *p; //vetor para armazenar as notas, feito com ponteiro para poder alocar dinamicamente a memória.

    printf("Insira a quantia de alunos: \n");
    scanf("%i", &quant);


    //alocação dinâmica de p, malloc aloca uma quantia "quant" de memória de tamanho float e transforma esses espaços de memória em float.
    p = (float *)(malloc(quant * sizeof(float))); 


    //caso a alocação falhe o programa fecha.
    if(p == NULL){ 
        printf("Erro de alocação de memoria.");
        system("pause");
        exit(1);
    }

    printf("\n");

    for (i = 0; i < quant; i++)
    {
        printf("Insira a %ia nota: ", i+1);
        scanf("%f", &p[i]);
    }

    printf("\n");

    for (i = 0; i < quant; i++)
    {
        printf("Nota %i: %.2f\n", i+1, p[i]);
    }

    //libera a memória alocada por p.
    free(p);

    return 0;
}