#include <stdio.h>
#include <locale.h>

int mat[4][5], i=0, j=0, cont=0;

int main()
{

    setlocale(LC_ALL, "Portuguese_Brasil");


    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Insira o número inteiro da %i linha, %i coluna: \n", i+1, j+1);
            scanf("%i", &mat[i][j]);

            if (mat[i][j] % 3 == 0)
            { 
                mat[i][j] = 0;
                cont++;
            }
        }
        
    }

    printf("\n");
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%i\t", mat[i][j]);
        }

        printf("\n");
    }
    
    printf("\n%i números foram alterados.\n", cont);
    
    return 0;
}
