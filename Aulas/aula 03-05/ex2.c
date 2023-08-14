#include <stdio.h>
#include <string.h>

typedef struct d
{
    int dia;
    char mes[50];
    int ano;
}data;

int dif(data d1, data d2){
    if(d1.dia == d2.dia && d1.ano == d2.ano && strcmp(d1.mes, d2.mes) == 0)
        return 1;
    else
        return 0;
}

int main()
{
    data d1, d2;

    printf("Insira o primeiro dia: \n");
    scanf("%i", &d1.dia);
    printf("Insira o segundo dia: \n");
    scanf("%i", &d2.dia);
    setbuf(stdin, NULL);
    printf("Insira o primeiro mes: \n");
    gets(d1.mes);
    setbuf(stdin, NULL);
    printf("Insira o segundo mes: \n");
    gets(d2.mes);
    printf("Insira o primeiro ano: \n");
    scanf("%i", &d1.ano);
    printf("Insira o segundo ano: \n");
    scanf("%i", &d2.ano);

    if(dif(d1, d2) == 1)
        printf("As datas sao iguais.");
    else
        printf("As datas sao diferentes.");

    return 0;
}