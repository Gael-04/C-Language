#include <stdio.h>
#include <stdlib.h>

float peso_ide(float h, char sexo){
    if (sexo == 'm' || sexo == 'M')
    {
        return (72.7*h)-58;
    }
    else{
        if(sexo == 'm' || sexo == 'M'){
            return (62.1*h)-44.7;
        }
        else{
            printf("Sexo invalido!");
            return 0;
        }
    }  
}

int main()
{
    float h = 0;
    char sexo;

    printf("Insira a altura: \n");
    scanf("%f", &h);
    setbuf(stdin, NULL);

    printf("Insira o sexo: \n");
    scanf("%c", &sexo);

    if (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F')
    {
        printf("Sexo invalido, insira novamente: \n");
        scanf("%c", &sexo);
    }
    

    printf("O peso ideal e: %.2f", peso_ide(h, sexo));


    return 0;
}
