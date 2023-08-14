#include <stdio.h>

int main()
{
    struct banda{
        char nome[50], genero[50];
        int integrantes;
        float ingresso;
    };
    struct banda b1;

    printf("Insira o nome da banda: \n");
    gets(b1.nome);
    printf("Insira o genero de musica: \n");
    gets(b1.genero);
    printf("Insira o numero de integrantes: \n");
    scanf("%i", &b1.integrantes);
    printf("Insira o valor do ingresso: \n");
    scanf("%f", &b1.ingresso);

    printf("Nome da banda: %s\nGenero musical: %s\nIntegrantes: %i\nValor do ingresso: %.2f reais\n", b1.nome, b1.genero, b1.integrantes, b1.ingresso);

    return 0;
}