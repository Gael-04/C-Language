#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[30], str2[30];

    printf("Insira o primeiro termo: \n");
    gets(str1);
    printf("Insira o segundo termo: \n");
    gets(str2);

    if(strcmp(str1, str2) > 0)
        printf("Termos em ordem alfabetica: \n%s", strcat(str2, str1));
    else
        if(strcmp(str1, str2) == 0)
            printf("Termos iguais: \n%s", strcat(str1, str2));  
        else
            printf("Termos em ordem alfabetica: \n%s", strcat(str1, str2));

    return 0;
}