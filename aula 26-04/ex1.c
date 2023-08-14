#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[4][100], str[400] = {'\0'};
    int i;

    for (i = 0; i < 4; i++){
        printf("Insira a %ia palavra: \n", i+1);
        gets(palavra[i]);
    }

    for (i = 0; i < 4; i++)
        printf("%s\n", palavra[i]);   

    for (i = 0; i < 4; i++){
        strcat(str, palavra[i]);
        strcat(str, " ");
    }
    printf("\n%s", str);
    
    return 0;
}