#include <stdio.h>

int main(int argc, char const *argv[]){

    int estado;

    printf("Escolha um estado pelo numero");
    printf("[1] - Acre - AC\n");
    printf("[2] - Amapa - Ap\n");
    printf("[3] - Alagoas - AL\n");
    printf("[4] - Amazonas - AM\n");
    printf("[5] - Banhia - BA\n");
    printf("[6] - Ceara - CE\n");
    printf("[7] - Espirito Santo - ES\n");
    printf("[8] - Goias - GO\n");
    printf("[9] - Maranhao - MA\n");
    printf("[10] - Mato Grosso - MT\n");
    printf("[11] - Mato Grosso do Sul - MS\n");
    printf("[12] - Minas Gerais - MG\n");
    printf("[13] - Pará - PA\n");
    printf("[14] - Paraíba - PB\n");
    printf("[15] - Paraná - PR\n");
    printf("[16] - Pernambuco - PE\n");
    printf("[17] - Piauí - PI\n");
    printf("[18] - Rio de Janeiro - RJ\n");
    printf("[19] - Rio Grande do Norte - RN\n");
    printf("[20] - Rio Grande do Sul - RS\n");
    printf("[21] - Rondônia - RO\n");
    printf("[22] - Roraima - RR\n");
    printf("[23] - Santa Catarina SC\n");
    printf("[24] - São Paulo SP\n");
    printf("[25] - Sergipe - SE\n");
    printf("[26] - Tocantins - TO\n");

    printf("Digite o número do estado");
    scanf("%d", &estado);

    switch (estado)
    {
    case 1: case 3: case 4: case 14: case 22: case 23: case 27:
          printf("Região Norte");
    break;
    case 2: case 5: case 6: case 10: case 15: case 17: case 18: case 20: case 26:
         printf("Região Nordeste");
    break;
    case 7: case 9: case 11: case 12:
        printf("Região Centro-Oeste");
    break;
    case 8: case 13: case 19: case 25:
        printf("Região Sudeste");
    break;
    case 16: case 21: case 24:
        printf("Região Sul");
    break;
    
    default:
    printf("Opçao inválida");
        break;
    }

    return 0;

}