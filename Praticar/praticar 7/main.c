#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    float *vet, media = 0, maior = 0, menor = 0;

    printf("Insira o numero de elementos: \n");
    scanf("%i", &n);
    vet = (float *)malloc(n * sizeof(float));
    
    for (i = 0; i < n; i++){
        printf("\nInsira o %io elemento: ", i+1);
        scanf("%f", &vet[i]);

        if (maior == 0 && menor == 0){
            maior = vet[i];
            menor = vet[i];
        }
        else{
            if (vet[i] > maior)
                maior = vet[i];
            if (vet[i] < menor)
                menor = vet[i];
        }
        
        media = media + vet[i];
    }

    media = media / n;

    printf("\nMedia: %.2f", media);
    printf("\nMaior valor: %.2f", maior);
    printf("\nMenor valor: %.2f", menor);

    free(vet);

    return 0;
}