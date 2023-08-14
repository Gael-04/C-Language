#include <stdio.h>
#include <stdlib.h>

#define TAM 2

typedef struct estaciona
{
    char placa[7];
    char modelo [100];
    char entrada[6];
    char saida[6];
}estac;

int main()
{
    estac *vet;
    int i;

    vet = (estac*)malloc(TAM * sizeof(estac));
    
    for(i= 0; i < TAM; i++){
        printf("Insira a placa do %io veiculo: \n", i+1);
        gets(vet[i].placa);
        setbuf(stdin, NULL);
        printf("Insira o modelo do %io veiculo: \n", i+1);
        gets(vet[i].modelo);
        setbuf(stdin, NULL);
        printf("Insira o horario de entrada do %io veiculo (hh:mm): \n", i+1);
        gets(vet[i].entrada);
        setbuf(stdin, NULL);
        printf("Insira o horario de saida do %io veiculo (hh:mm): \n", i+1);
        gets(vet[i].saida);
        setbuf(stdin, NULL);
    }

    printf("\n");
    for(i= 0; i < TAM; i++){
        printf("Placa do %io veiculo: %s\n", i+1, vet[i].placa);
        printf("Modelo do %io veiculo: %s\n", i+1, vet[i].modelo);
        printf("Horario de entrada do %io veiculo (hh:mm): %s\n", i+1, vet[i].entrada);
        printf("Horario de saida do %io veiculo (hh:mm): %s\n", i+1, vet[i].saida);
        printf("\n");
    }

    return 0;
}