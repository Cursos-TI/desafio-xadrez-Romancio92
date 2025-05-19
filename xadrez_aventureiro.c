#include <stdio.h>

int main () {
    //declaração de variáveis;atribuição de valores às variáveis.
    int mbispo = 1, mtorre, mrainha, mcavalo1, mcavalo2 = 1;

    //entrada do jogador; número de casas que a torre deverá caminhar para cima.
    printf("Digite o número de casas que a torre deverá subir: \n");
    scanf("%d", &mtorre);

    // lógica da movimentação da torre para direita.
    while (mtorre <= 7 && mtorre >=1) {

        printf("Direita \n");
        mtorre--;
    }

   //lógica de movimentação para cima e para direita do bispo.
    do {
                
        //um condição para caso o numero de jogadas seja 5 vezes para cima e direita.
        if (mbispo <= 5 && mbispo >=1) {
            
            printf("O bispo movimentou para cima e para direita %d vezes.\n", mbispo);
            mbispo++;

        }   else {
            printf("número de jogadas inválido\n"); 
        
        }
        //condição para contínua execução do "do".
    } while (mbispo <= 5 && mbispo >=1); {
        printf("movimento encerrado\n");
      
    }
    //estrutura for para movimentação da rainha 7 casas à esquerda.

    printf("digite o numero de casas que a rainha deverá movimentar para direita: \n");
    scanf("%d", &mrainha);

    for (mrainha; mrainha <=7 && mrainha >=1; mrainha--) {
    printf("A rainha movimentou para esquerda\n");
    }

    //movimentação do cavalo 2 para baixo e uma para esquerda; for indica a direição para à esquerda e o while indica a direção para baixo.
    for (mcavalo1 = 1; mcavalo1 <= 1; mcavalo1++) {
        while (mcavalo2 <= 2) 
        
        {
        printf("O cavalo andou para Baixo \n");
        mcavalo2++;
        }
        printf("O cavalo andou para esquerda \n");
    }
     
    return 0;