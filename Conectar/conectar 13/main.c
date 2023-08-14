#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int divide_data(char data[], int *dia, int *mes, int *ano){
    char d[3], m[3], a[5];

    if (data[2] != '/' || data[5] != '/')
        return -1;
    
    if (isdigit(data[0]) == 0 || isdigit(data[1]) == 0 || isdigit(data[3]) == 0 || isdigit(data[4]) == 0 || isdigit(data[6]) == 0 || isdigit(data[7]) == 0 || isdigit(data[8]) == 0 || isdigit(data[9]) == 0)
        return -2;

    strncpy(d, data[0], 2);
    strncpy(m, data[3], 2);
    strncpy(a, data[6], 4);

    *dia = atoi(d);
    *mes = atoi(m);
    *ano = atoi(a);

    return 1;
}


int main()
{
    char data[11];
    int *dia, *mes, *ano;
    
    printf("Insira a data: \n");
    gets(data);

    divide_data(data, dia, mes, ano);

    printf("\n dia: %i\nmes: %i\nano: %i", *dia, *mes, *ano);

    return 0;
}
