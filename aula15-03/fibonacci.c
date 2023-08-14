#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num){
    if (num == 0 || num == 1)
    {
        return num;
    }
    else{
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main(){
    int n = 0;

    printf("insira a posicao do numero na escala de fibonacci: \n");
    scanf("%i", &n);

    printf("O numero e: %i\n", fibonacci(n));

    return 0;
}
