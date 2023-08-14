#include <stdio.h>
#include <locale.h>

int vet[10], i = 0;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brasil");

    for (i = 0; i < 10; i++)
    {
        printf("Insira o %io número inteiro: \n", i+1);
        scanf("%i", &vet[i]);
    }

    printf("\n");

    for (i = 0; i < 10; i++)
    {
        if(vet[i] % 2 == 0) printf("%i\t Par\n", vet[i]);
        else printf("%i\t Impar\n", vet[i]);
    }
    

    return 0;
}
