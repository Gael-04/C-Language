#include <stdio.h>
#include <stdlib.h>

#define LIN 5
#define COL 5

float** cria_matriz(int M, int N){
    float **mat;
    int i;

    mat=(float**)malloc(M * sizeof(float*)); //Aloca os espaços de memória da matriz
    for (i = 0; i < M; i++) 
        mat[i] = (float*)malloc(N * sizeof(float)); 

    return mat;
}

void libera_matriz(float **p, int M){
    int i;
    
    if(p == NULL) //Checa se o espaço de memória está vazio
        printf("Erro de alocacao de memoria.");
    else{
        for (i = 0; i < M; i++) //Libera a memória alocada pela matriz
            free(p[i]);
        free(p);
    }
}


int main()
{
    int i, j;
    float **mat;

    mat = cria_matriz(LIN, COL);
    for (i = 0; i < LIN; i++)
        for (j = 0; j < COL; j++)
            mat[i][j] = 1.5; //Preenche a matriz

    printf("\nMatriz alocada: \n");
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
            printf("%.2f\t", mat[i][j]);
        printf("\n"); //Exibe a matriz
    }
    printf("Endereco da matriz alocada: %p\n", mat);

    libera_matriz(mat, LIN);
    printf("\nEndereço da matriz liberada: %p\n", mat);
    printf("Endereco do ponteiro da matriz: %p\n", &mat);

    return 0;
}
