#include <stdio.h>

int main(int argc, char const *argv[]){

    float numero1, numero2, resultado;
    char operacao;

    printf("Digite o primeiro número:");
    scanf("%f", &numero1);

    printf("Digite o segundo número:");
    scanf("%f", &numero2);

    printf("Digite a operação (+, -, * ou /):");
    scanf(" %c", &operacao);

    if (operacao == '/' && numero2 == 0) {
        printf("Erro: divisão por zero!");
    } else {
        switch (operacao) {
            case '+':
                resultado = numero1 + numero2;
                break;
            case '-':
                resultado = numero1 - numero2;
                break;
            case '*':
                resultado = numero1 * numero2;
                break;
            case '/':
                resultado = numero1 / numero2;
                break;
            default:
                printf("Operação inválida.");
                return 1;
        }
        printf("Resultado: %.2f\n", resultado);
    }

    return 0;
}
