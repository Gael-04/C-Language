#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j;

    printf("Digite a quantia de alunos: \n");
    scanf("%i", &m);
    printf("Digite a quantia de questoes: \n");
    scanf("%i", &n);

    char *gab = (char*)malloc(n * sizeof(char)); //alocação do gabarito

    char **resp = (char**)malloc(m * sizeof(char*)); //alocação da matriz resposta
    for (i = 0; i < m; i++)
        resp[i] = (char*)malloc(n * sizeof(char));
    
    for (i = 0; i < n; i++){ //coletar gabarito
        printf("Insira a resposta da %ia questao: \n", i+1);
        setbuf(stdin, NULL);
        scanf("%c", gab+i);
    }

    for (i = 0; i < m; i++) //coleta as respostas do aluno
        for (j = 0; j < n; j++){
            printf("Resposta %i do %i aluno: \n", j+1, i+1);
            setbuf(stdin, NULL);
            scanf("%c", &resp[i][j]);
        }   
    
    printf("Gabarito: \n");
    for (i = 0; i < n; i++)
    {
        printf("Questao %i: %c\n", i+1, *(gab+i));
    }
    printf("\n");

    int ponto;
    for (i = 0; i < m; i++){
        ponto = 0;
        printf("Aluno %i: \t", i+1);
        for (j = 0; j < n; j++){
            printf("Resposta %i: %c\t", i+1, resp[i][j]);
            if(resp[i][j] == gab[i]) ponto++;
        }
        printf("\tPontuação: %i\n", ponto);
    }
    
    
    free(gab);
    for (i = 0; i < m; i++)
        free(resp[i]);
    free(resp);
    

    return 0;
}