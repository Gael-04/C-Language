#include <stdio.h>
#include <stdlib.h>

typedef struct f{
    int codigo;
    float salario;
    int idade;
    char sexo;
}func;


int main()
{
    int i, n;
    func *v;

    printf("Digite a quantia de funcionarios: \n");
    scanf("%i", &n);

    v = (func*)malloc(n * sizeof(func));
    
    for (i = 0; i < n; i++){
        printf("Digite o codigo do %io func.: \n", i+1);
        scanf("%i", &v[i].codigo);
        printf("Digite o salario do %io func.: \n", i+1);
        scanf("%f", &v[i].salario);
        printf("Digite a idade do %io func.: \n", i+1);
        scanf("%i", &v[i].idade);
        setbuf(stdin, NULL);
        printf("Digite o sexo do %io func.: \n", i+1);
        scanf("%c", &v[i].sexo);    
    }

    for (i = 0; i < n; i++){
        printf("Codigo: %i\n", v[i].codigo);
        printf("Codigo: %.2f\n", v[i].salario);
        printf("Codigo: %i\n", v[i].idade);
        printf("Codigo: %c\n", v[i].sexo);
    }
        

    free(v);
    return 0;
}