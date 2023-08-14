#include <stdio.h>
#include <locale.h>

float h = 0;
char sexo;

int main()
{
    setlocale(LC_ALL, "Portuguese_Brasil");
    
    printf("Digite sua altura: \n");
    scanf("%f", &h);

    setbuf(stdin, NULL);
    printf("Insira seu sexo, M para masculino e F para feminino: \n");
    scanf("%c", &sexo);
    setbuf(stdin, NULL);

    while (sexo != 'm' && sexo != 'M' && sexo != 'F' && sexo != 'f')
    {
        printf("Sexo inválido, digite M para masculino e F para feminino: \n");
        scanf("%c", &sexo);
    }

    if(sexo == 'm' || sexo == 'M') printf("Seu peso ideal é de: %f", (72.7 * h) - 58);
    else printf("Seu peso ideal é de: %f", (62.1 * h) - 44.7);
    

    return 0;
}
