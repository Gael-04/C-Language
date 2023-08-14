#include <stdio.h>
#include <locale.h>

int n=0;

int padovan(int num){
    if(num <= 2) return 1;

    return padovan(num - 2) + padovan( num - 3);
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brasil");

    printf("Insira a posição do número que deseja saber da sequência de Padovan: \n");
    scanf("%i", &n);

    printf("\n O %io número na sequência de Padovan é: %i", n, padovan(n));

    return 0;
}
