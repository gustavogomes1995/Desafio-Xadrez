#include <stdio.h>

// Requisito: Uso de constantes.
// Nomes de variaveis/constantes.

const int MOVIMENTOS_BISPO = 5;
const int MOVIMENTOS_TORRE = 5;
const int MOVIMENTOS_RAINHA = 8;

int main() {

    // Apresentacao usando printf
    printf("--- Simulacao de Movimentacao de Pecas (usando printf) ---\n\n");


    // 1. BISPO (5 casas, diagonal superior direita) - Usando FOR
    printf("1. Movimentacao do Bispo (usando FOR):\n");

    // O loop 'for' vai de 1 ate 5
    for (int i = 1; i <= MOVIMENTOS_BISPO; ++i) {

       // o Bispo se move na diagonal (combinacao de Cima e Direita)
        printf("  Movimento %d: Cima + Direita\n", i);
    }

    printf("--------------------------------\n\n");


    // 2. TORRE (5 casas para a direita) - Usando WHILE
    printf("2. Movimentacao da Torre (usando WHILE):\n");

    int contador_torre = 0; // Variavel comeca em zero


    // O loop continua ENQUANTO o contador for menor que 5
    while (contador_torre < MOVIMENTOS_TORRE) {
        contador_torre = contador_torre + 1; // variavel

        // Torre se move reto para a direita.
        printf("  Movimento %d: Direita\n", contador_torre);
    }

    printf("--------------------------------\n\n");


    // 3. RAINHA (8 casas para a esquerda) - Usando DO-WHILE
    printf("3. Movimentacao da Rainha (usando DO-WHILE):\n");

    int contador_rainha = 0; // Variavel comeca em zero

    do {
        contador_rainha = contador_rainha + 1; // Incrementa


        // Documentacao: Rainha se move reto para a esquerda.
        printf("  Movimento %d: Esquerda\n", contador_rainha);

    } while (contador_rainha < MOVIMENTOS_RAINHA); // Condicao de repeticao

    printf("--------------------------------\n");
    printf("Simulacao de movimentos finalizada.\n");

    return 0;
}
