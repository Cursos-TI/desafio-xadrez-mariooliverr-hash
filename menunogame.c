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
    int escolhadojogadorum;
    int Menu;

    printf("--MENU--\n\n");
    printf("**ESCOLHA SUA JOGADA**\n\n");
    printf("1 - MOVER RAINHA\n");
    printf("2 - MOVER BISPO\n");
    printf("3 - MOVER TORRE\n");
    printf("4 - MOVER CAVALO\n");

    scanf("%d", &escolhadojogadorum);

    switch (Menu)
    {
    case 1:
         
        break;
    case 2:
                        //move a rainha 8 vezes para esquerda (8)
        break;
    case 3:
        i; //move a torre 5 vezes (5) 
        break;
    case 4:
        k, j; //move o cavalo 2 cima 1 direita (3)
        break;
    default:
        printf("Comando inválido\n");
        break;
    }

    if (escolhadojogadorum == 1){
        
    } else if (escolhadojogadorum == 2){

    } else if (escolhadojogadorum == 3){
        for ( i = 1; i <= 5; i++)
        {
            printf("Cima\n");
        }
    } else if (escolhadojogadorum == 4){
        for ( k = 1; k <= 1; k++)
        {
            for ( j = 0; j <= 1 ; j++)
            {
                printf("Cima\n");
            }
            printf("Direita\n");
        }

    } else{
        printf("Não funcionou\n");
    }

    return 0;
}