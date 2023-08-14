#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int enc_char(char *v, char l){ //ponteiro pois um vetor é um ponteiro, passamos o endereço da primeira posição da string
    int i;
    for (i = 0; i < (int)strlen(v); i++)
        if (toupper(v[i]) == toupper(l))
            return i;
    
    return -1;
}

int main(){
    char texto[100], letra;

    printf("Insira uma palavra: \n");
    gets(texto);
    printf("Insira o caracter que deseja buscar: \n");
    setbuf(stdin, NULL);
    scanf("%c", &letra);

    printf("Posição: %i\n", enc_char(texto, letra));

    return 0;
}