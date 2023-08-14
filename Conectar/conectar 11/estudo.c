#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *arq;
    char t1[100], t2[100];

    arq = fopen("arquivo.txt","wt");
    if(arq == NULL){
        printf("Arquivo não encontrado.");
        exit(0);
    }

    fprintf(arq, "Hello world!");

    fclose(arq);

    arq = fopen("arquivo.txt","rt");
    if(arq == NULL){
        printf("Arquivo não encontrado.");
        exit(0);
    }

    fscanf(arq, "%s %s", &t1, &t2);
    printf("%s %s", t1, t2);

    fclose(arq);
    
    return 0;
}