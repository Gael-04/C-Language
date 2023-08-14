#include <stdio.h>
#include <stdlib.h>

float n1, n2, n3, n4;
int i=0;
float taxa=0;

float taxa_med(float y, float y0, float x, float x0){
    float res = 0;

    if (x==x0)
    {
        printf("Divisão por 0!\n");
        return 0;
    }
    else{
        res = (y - y0) / (x - x0);
        return res;
    }
}

int main()
{
   printf("Insira o valor de Y: \n");
   scanf("%f", &n1);

   printf("Insira o valor de Y0: \n");
   scanf("%f", &n2);

   printf("Insira o valor de X: \n");
   scanf("%f", &n3);

   printf("Insira o valor de X0: \n");
   scanf("%f", &n4);

    taxa = taxa_med(n1, n2, n3, n4);
    printf("A taxa media e: %.2f\n", taxa);
    
    return 0;
}