#include <stdio.h>

#define TAM 10

int main()
{
    int n, i;
    FILE *arq;

    if((arq = fopen("lista.txt", "w")) != NULL){
        for (i = 0; i < TAM; i++){
            printf("Insira o %io numero: ", i+1);
            scanf("%i", &n);
            fprintf(arq, "%i\n", n);
        }

        fclose(arq);
    }

    if((arq = fopen("lista.txt", "r")) != NULL){
        for (i = 0; i < TAM; i++){
            fscanf(arq, "%i", &n);
            printf("\n%i", n);
        }

        fclose(arq);
    }

    return 0;
}
