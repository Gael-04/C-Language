#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
    int numeros[TAM], *ponteiro, i;

    ponteiro = numeros;

    for (i = 0; i < TAM; i++){
        printf("Insira o %io valor do array: \n", i+1);
        scanf("%i", &numeros[i]);
    }
    
    for (i = 0; i < TAM; i++){
        printf("%io valor: %i\tEndereco: %p\n", i+1, *ponteiro, ponteiro);
        ponteiro++;
    }

    ponteiro = numeros;
    ponteiro = ponteiro + 2;

     for (i = 2; i < TAM; i++){
        printf("\n%io valor: %i\tEndereco: %p", i+1, *ponteiro, ponteiro);
        ponteiro++;
    }

    return 0;
}