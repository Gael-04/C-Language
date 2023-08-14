#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    char senha[20] = "senhaforte", login[20];

    setlocale(LC_ALL, "Portuguese");

    printf("Bem vindo usuário, insira sua senha para continuar: \n");
    gets(login);

    /* printf("\n%d\n\n", strcmp(login, senha)); */

    if(strcmp(login, senha) == 0)
        printf("Acesso autorizado");
    else
        printf("Acesso negado, travando sistema."); 

    return 0;
}