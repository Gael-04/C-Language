#include <stdio.h>
#include <locale.h>



int num[2], i, maior = 0, menor = 0;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brasil");

    for (i = 0; i < 2; i++)
    {
        printf("Insira um número: \n");
        scanf("%i", &num[i]);
    }

    menor = num[0];

    for (i = 0; i < 2; i++)
    {
        if(num[i] > maior) maior = num[i];
        if(num[i] < menor) menor = num[i];
    }
    
    printf("Maior número: %i\nA diferença entre os números é de: %i\n", maior, maior - menor);

    if(num[0] % 2 == 0) printf("O primeiro número é par.");
    else printf("O primeiro número é impar");

    return 0;
}
