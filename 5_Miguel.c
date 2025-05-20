#include <stdio.h>

int main(int argc, char const *argv[]){

    char categoria, sub_categoria;

    printf("Escolha uma categoria:\n");
    printf("[F] Filmes\n");
    printf("[S] Séries\n");
    printf("[D] Documentários\n");
    scanf(" %c", &categoria);

    switch (categoria) {
        case 'F':
        case 'f':
            printf("Escolha o gênero:\n[S] Suspense\n[A] Ação\n");
            scanf(" %c", &sub_categoria);
            switch (sub_categoria) {
                case 'S':
                case 's':
                    printf("Sugestão: \"A órfã\"\n");
                    break;
                case 'A':
                case 'a':
                    printf("Sugestão: \"Batman: O cavaleiro das trevas\"\n");
                    break;
                default:
                    printf("Subcategoria inválida.\n");
            }
            break;

        case 'S':
        case 's':
            printf("Escolha o gênero:\n[D] Drama\n[C] Comédia\n");
            scanf(" %c", &sub_categoria);
            switch (sub_categoria) {
                case 'D':
                case 'd':
                    printf("Sugestão: \"Revenge\"\n");
                    break;
                case 'C':
                case 'c':
                    printf("Sugestão: \"How I met your mother\"\n");
                    break;
                default:
                    printf("Subcategoria inválida.\n");
            }
            break;

        case 'D':
        case 'd':
            printf("Escolha o gênero:\n[I] Investigação\n[C] Ciência\n");
            scanf(" %c", &sub_categoria);
            switch (sub_categoria) {
                case 'I':
                case 'i':
                    printf("Sugestão: \"Deep web\"\n");
                    break;
                case 'C':
                case 'c':
                    printf("Sugestão: \"Terra\"\n");
                    break;
                default:
                    printf("Subcategoria inválida.\n");
            }
            break;

        default:
            printf("Categoria inválida.\n");
    }

    return 0;

}
