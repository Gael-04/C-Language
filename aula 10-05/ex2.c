#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
    int codigo;
    char nome[100];
    int idade;
    char telefone[15];
}pessoa;

int main()
{
    pessoa temp, vet[5]={
        1, "Thomas Thurbano", 24, "3",
        2, "Tisoku Bitelo", 69, "5",
        3, "Jacinto Pinto", 24, "7",
        4, "Dani Ficada", 69, "9",
        5, "Jussepi Cadura", 24, "11"
    };

    FILE *arq;

    if ((arq = fopen("lista.txt", "wb")) != NULL){
        fwrite(vet, sizeof(pessoa), 5, arq);

        fclose(arq);
    }

    if ((arq = fopen("lista.txt", "rb")) != NULL){
        fseek(arq, 1 * sizeof(pessoa), SEEK_SET);
        fread(&temp, sizeof(pessoa), 1, arq);
        printf("\nCodigo: %i\nNome: %s\nIdade: %i\nTelefone: %s\n\n", temp.codigo, temp.nome, temp.idade, temp.telefone);

        fseek(arq, 3 * sizeof(pessoa), SEEK_SET);
        fread(&temp, sizeof(pessoa), 1, arq);
        printf("Codigo: %i\nNome: %s\nIdade: %i\nTelefone: %s\n\n", temp.codigo, temp.nome, temp.idade, temp.telefone);

        fclose(arq);
    }
    

    return 0;
}