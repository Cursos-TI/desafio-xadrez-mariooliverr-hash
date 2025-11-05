#include <stdio.h> 

// Função recursiva para mover a torre para a direita N vezes
void recursividadetorre(int casastorre){
    if (casastorre > 0) { // se ainda restam casas, imprime e chama recursivamente
        printf("Direita\n");
        recursividadetorre(casastorre - 1);
    }
}

// Função recursiva para mover a rainha para a esquerda N vezes
void rescursividaderainha(int casasrainha){
    if (casasrainha > 0){ // se ainda restam casas, imprime e chama recursivamente
        printf("Esquerda\n");
        rescursividaderainnha(casasrainha - 1); // chamada recursiva corrigida
    }
}

// Função recursiva para mover o bispo diagonalmente para a esquerda para cima N vezes
void recursividadebispo(int casasbispo){
    if (casasbispo > 0) { // se ainda restam casas, imprime e chama recursivamente
        printf("Diagonal esquerda\n");
        recursividadebispo(casasbispo - 1);
    }
}

int main() {
    int escolhadojogadorum = 0; // escolha inicial do jogador (1..4)
    int segundaescolha = 0;     // escolha para voltar peça (1..3)
    int quantidadecasas = 0;    // número de casas para voltar
    int l = 0;                  // variável auxiliar para loops

    // Exibe menu principal
    printf("--MENU--\n\n");
    printf("**ESCOLHA SUA JOGADA**\n\n");
    printf("1 - MOVER RAINHA\n");
    printf("2 - MOVER BISPO\n");
    printf("3 - MOVER TORRE\n");
    printf("4 - MOVER CAVALO\n");

    // Lê a opção do jogador
    if (scanf("%d", &escolhadojogadorum) != 1) {
        printf("Entrada inválida\n");
        return 1;
    }

    // Executa a jogada escolhida (simulação simples imprimindo movimentos)
    switch (escolhadojogadorum)
    {
    case 1: // rainha: até 8 casas para a esquerda (simulação)
        for (l = 0; l < 8; l++) {
            printf("Esquerda\n");
        }
        break;
    case 2: // bispo: até 5 casas em diagonal para a direita (simulação)
        for (l = 0; l < 5; l++) {
            printf("Diagonal direita\n");
        }
        break;
    case 3: // torre: até 5 casas para cima (simulação)
        for (l = 0; l < 5; l++) {
            printf("Cima\n");
        }
        break;
    case 4: // cavalo: exemplo de movimento (2 cima, 1 direita)
        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
        break;
    default:
        printf("Opção inválida no menu principal\n");
        break;
    }

    // Menu para voltar a peça de posição usando funções recursivas
    printf("___Escolha uma peça para voltar de posição___\n\n");
    printf("1 - Voltar Rainha - (Até 8 casas para esquerda)\n");
    printf("2 - Voltar Bispo - (Até 5 casas diagonal para cima Esquerda)\n");
    printf("3 - Voltar Torre - (Até 5 casas)\n");

    // Lê a segunda escolha
    if (scanf("%d", &segundaescolha) != 1) {
        printf("Entrada inválida\n");
        return 1;
    }

    // Pergunta quantas casas voltar
    printf("Quantas casas você quer voltar ?\n");
    if (scanf("%d", &quantidadecasas) != 1) {
        printf("Entrada inválida\n");
        return 1;
    }

    // Valida quantidade mínima
    if (quantidadecasas < 0) {
        printf("Quantidade de casas inválida\n");
        return 1;
    }

    // Limita quantidade ao máximo permitido por peça
    if (segundaescolha == 1 && quantidadecasas > 8) quantidadecasas = 8;
    if (segundaescolha == 2 && quantidadecasas > 5) quantidadecasas = 5;
    if (segundaescolha == 3 && quantidadecasas > 5) quantidadecasas = 5;

    // Chama a função recursiva apropriada para imprimir o retorno
    switch (segundaescolha)
    {
    case 1:
        rescursividaderainha(quantidadecasas); // volta rainha para a esquerda
        break;
    case 2:
        recursividadebispo(quantidadecasas);   // volta bispo em diagonal esquerda
        break;
    case 3:
        recursividadetorre(quantidadecasas);   // volta torre para a direita
        break;
    default:
        printf("Comando inválido\n");
        break;
    }

    return 0; // fim do programa
}