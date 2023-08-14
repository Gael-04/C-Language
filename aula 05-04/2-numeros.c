#include <stdio.h>

void ordem (int *x1, int *x2){
    if (*x1 > *x2)
    {
        int temp;
        temp = *x2;
        *x2 = *x1;
        *x1 = temp;
    }
}

int main()
{
    int a, b;

    ordem(a, b);

    printf("%i %i", a, b);

    return 0;
}
