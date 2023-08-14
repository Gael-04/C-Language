#include <stdio.h>

#define QUANT 15

float dados[QUANT][3], maior = 0, menor = 0; //coluna 0 = altura, coluna 1 = peso, coluna 2 = IMC
int i=0, j=0;

int main()
{

    //COLETA OS DADOS, CALCULA E ARMAZENA O IMC
    for (i = 0; i < 3; i++)
    {
        if(i == 0){
            for (j = 0; j < QUANT; j++)
            {
                printf("Insira a %ia altura: \n", j+1);
                scanf("%f", &dados[j][i]);
            }
        }

        printf("\n");

        if(i == 1){
            for (j = 0; j < QUANT; j++)
            {
                printf("Insira o %io peso: \n", j+1);
                scanf("%f", &dados[j][i]);
            }
        }

        if(i == 2){
            for (j = 0; j < QUANT; j++)
            {
                dados[j][i] = dados[j][i-1] / (dados[j][i-2] * dados[j][i-2]);
            }
        }
        
    }

    //PROCURA E ARMAZENA OS VALORES DE MAIOR E MENOR IMC
    maior = dados[0][2];
    menor = dados[0][2];

    for (j = 0; j < QUANT; j++){
        if (dados[j][2] > maior)
        {
            maior = dados[j][2];
        }

        if (dados[j][2] < menor)
        {
            menor = dados [j][2];
        }
    }
     
    

    //EXIBE OS DADOS EM UMA TABELA
    printf("\n\t\tAltura \tPeso \tIMC");
    for (j = 0; j < QUANT; j++)
    {
       printf("\n%ia pessoa:\t", j+1);
       for (i = 0; i < 3; i++)
       {
           printf("%.2f\t", dados[j][i]);
       }
       
    }
    
    printf("\n\n O maior IMC foi de: %.2f", maior);
    printf("\n O menor IMC foi de: %.2f\n", menor);



    return 0;
}