#include <stdio.h>

int main(int argc, char const *argv[]){

    int codigo;

    printf("Digite o código do produto");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1254:
        printf("Sanduíche de presunto - RS 8,00");
        break;
    case 5698:
        printf("Churros - RS 3,50");
        break;
    case 7114:
        printf("Suco de laranja que parece limão mas tem gosto de tamarindo - Rs 5,00");
    default:
    printf("Código inválido");
    break;
    
    }

    return 0;
}