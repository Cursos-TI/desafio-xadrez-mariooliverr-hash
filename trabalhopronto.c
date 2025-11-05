#include <stdio.h>
    void recursividadetorre(int casastorre){
        if (casastorre > 0) {
            printf("Direita\n");
            recursividadetorre(casastorre - 1);
        }
    }

    void rescursividaderainnha(int casasrainha){
        if (casasrainha > 0){
            printf("Esquerda");
            rescursividaderainnha(casasrainha - 1);
        }
        
    }

    void recursividadebispo(int casasbispo){
        if (casasbispo > 0)
        {
            printf("Esquerda Diagonal");
            recursividadebispo(casasbispo - 1);
        }
        
    }


int main() {
    
    int movimento = 1;
    int i, j, k, l;
    int movimentodatorre;
    int escolhadojogadorum;
    int Menu, Menu2;
    int movimentodarainha = 8;
    int movimentodobispo = 5;
    int segundaescolha;
    int quantidadecasas;
    

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
         movimentodarainha; 
        break;
    case 2:
         movimentodobispo;            
        break;
    case 3:
        i; 
        break;
    case 4:
        k, j; 
        break;
    default:
    }

    if (escolhadojogadorum == 1){
        while(movimentodarainha <= 8 ){
            for (l = 1; l <= 8; l++){
                printf("Esquerda\n");
            }
            movimentodarainha++;
        }
    } else if (escolhadojogadorum == 2){
        while (movimentodobispo <= 5){
            for (int m = 1;  m <= 5; i++)
            {
                printf("Diagonal direita");
            }
            movimentodobispo++;
        }
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

    printf("___Escolha uma peça para voltar de posição___\n\n");
    printf("1 - Voltar Rainha - (Até 8 casas para esquerda)\n");
    printf("2 - Voltar Bispo - (Até 5 casas diagonal para cima Esquerda)\n");
    printf("3 - Voltar Torre - (Até 5 casas)\n");
    scanf("%d", &segundaescolha);

    printf("Quantas casas você quer voltar ?\n");
    scanf("%d", &quantidadecasas);

    switch (Menu2)
    {
    case 1:
        rescursividaderainnha(quantidadecasas) 1 : 0;
    case 2:
        recursividadebispo(quantidadecasas) 1 : 0;
        break;
    case 3:
        recursividadetorre(quantidadecasas) 1 : 0; 
        break;
    default:
        printf("Comando inválido");
    break;
    }

    return 0;
}