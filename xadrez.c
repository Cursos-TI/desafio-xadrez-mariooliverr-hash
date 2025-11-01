#include <stdio.h>

int main() {
    /* Variáveis:
        movimento - controla um loop while (inicia em 1)
        i, j, k   - variáveis inteiras usadas nos loops (k não usado) */
    int movimento = 1;
    int i, j, k;

    //Solicita ao usuário para digitar 5.
    printf("Digite 5 para mover a torre para cima:\n");
    scanf("%d", &i); 

    //Loop que imprime "Direita" 5 vezes.

    for ( i = 1; i <= 5; i++)
    {
        printf("Cima\n");
    }

    /* Pede para o usuário digitar 3 e armazena em j */
    printf("Digite 3 para mover o cavalo:\n");
    scanf("%d", &j); /* lê o valor em j */
    /* Loop que imprime "Cima" uma vez e "Direita" uma vez, repetido 3 vezes */
    for ( k = 1; k <= 1; k++)
    {
        printf("Cima");
        for ( j = 1; j <= 1 ; j++)
        {
                printf("cima");
        }
        printf("Direita");
    }

    return 0; /* fim do programa */
}