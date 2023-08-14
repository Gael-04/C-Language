#include <stdio.h>
#include <locale.h>

float bas = 0;
int ex = 0;

float pot(int e, float b){
    float res = 0;

    if(e == 0) return 1;
    if(e == 1) return b;

    res = b * pot(e-1, b);
    return res;
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brasil");

    printf("Insira o valor da base: \n");
    scanf("%f", &bas);
    printf("Insira o valor do expoente (deve ser inteiro e positivo): \n");
    scanf("%i", &ex);

    while (ex < 0)
    {
        printf("Insira o valor do expoente (deve ser inteiro e positivo): \n");
        scanf("%i", &ex);
    }
    
    printf("\nO resultado da operação é: %f\n", pot(ex, bas));

    return 0;
}
