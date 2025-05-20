#include <stdio.h>

int main(int argc, char const *argv[]){

    float valor, total;
    int opcao, parcelas;

    printf("Digite o valor total da compra: RS");
    scanf("%f", &valor);

    printf("Escolha uma forma de pagamento");
    printf("[1] - Crédito\n");
    printf("[2] - Débito\n");
    printf("[3] - Pix\n");
    printf("[4] - Dinheiro\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o número de parcelas");
        scanf("%d", &parcelas);
        if(parcelas > 0){
            total = valor/parcelas;
            printf("Você pagará %d parcelas de R$%.2f\n", parcelas, total);
        }else{
            printf("Numero de parcelas invalido");
        }
    break;
    case 2:
        printf("Pagamento à vista no débito: R$%.2f\n", valor);
    break;
    case 3:
           total = valor * 0.95;
           printf("Com 5%% de desconto via Pix: R$%.2f\n", total);
    break;
    case 4:
           total = valor * 1.02;
           printf("Com 2%% de taxa no boleto: R$%.2f\n", total);
    break;
    default:
            printf("Opção inválida.\n");
    break;
    }

    return 0;
}