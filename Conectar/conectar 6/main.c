#include <stdio.h>

int main()
{
    int n[2], i;

    for (i = 0; i < 2; i++)
    {
        printf("Insira um numero inteiro: \n");
        scanf("%i", &n[i]);
    }

    if (&n[0] > &n[1])
    {
        printf("Conteudo de maior endereco: %i\nEndereco da variavel: %p\n", n[0], &n[0]);
    } else printf("Conteudo de maior endereco: %i\nEndereco da variavel: %p\n", n[1], &n[1]); // %x também serve para mostrar endereço de memória

    printf("\nValores individuais:\n%p\n%p\n", &n[0], &n[1]);
    
    return 0;
}