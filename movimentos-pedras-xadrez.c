#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita)
    int torre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    int bispo = 5;
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < bispo) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    // Movimento da Rainha (8 casas para a esquerda)
    int rainha = 8;
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < rainha);

     // Movimento do cavalo (2 casas para baixo e 1 a esquerda)
     int cavalo = 1;
     printf("\nMovimento do cavalo:\n");

     while (cavalo--)
     {
        for (int i = 0; i < 2; i++){
            printf("Baixo\n");
        }
        printf("Esquerdo\n");
     }

    return 0;
}
