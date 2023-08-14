#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[100], rnome[100];
    FILE *arq;

    arq = fopen("nome.txt", "w");
    if(arq == NULL){
        printf("Erro ao ler arquivo.");
        exit(0);
    }

    printf("Insira seu nome: \n");
    gets(nome);
    fprintf(arq, "%s", nome);
    printf("Gravacao concluida. \n\n");

    fclose(arq);

    arq = fopen("nome.txt", "r");
    if(arq == NULL){
        printf("Erro ao ler arquivo.");
        exit(0);
    }

    fgets(rnome, 100, arq);
    printf("O nome salvo no arquivo e: %s", rnome);

    fclose(arq);

    return 0;
}