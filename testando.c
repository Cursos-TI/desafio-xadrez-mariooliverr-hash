#include <stdio.h>
    void movertorre(int casastorre){
        if (casastorre > 0) {
            printf("Direita\n");
            movertorre(casastorre - 1);
        }
    }


int main() {
    
    int movimento = 1;
    int i, j, k;
    int movimentodatorre;
    
    printf("Digite 5 para mover a torre para cima:\n");
    scanf("%d", &i); 

    for ( i = 1; i <= 5; i++)
    {
        printf("Cima\n");
    }
    
    printf("Digite 3 para mover o cavalo:\n");
    scanf("%d", &j); 

    for ( k = 1; k <= 1; k++)
    {
        printf("Cima\n");
        for ( j = 1; j <= 1 ; j++)
        {
                printf("cima\n");
        }
        printf("Direita\n");
    }

    printf("Escolha quantas cassas a torre deve se mover para a direita:\n");
    scanf("%d", &movimentodatorre);

    movertorre(movimentodatorre);

    return 0;
}