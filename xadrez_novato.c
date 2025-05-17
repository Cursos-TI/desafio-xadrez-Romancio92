#include <stdio.h>

int main () {
    //declaração de variáveis.
    int mbispo, mtorre, mrainha;

    //entrada do jogador/ numero de casas que a torre deverá caminhar para cima.
    printf("Digite o número de casas que a torre deverá subir: \n");
    scanf("%d", &mtorre);
    // lógica da movimentação da torre para direita.
    while (mtorre <= 7 && mtorre >=1) {

        printf("Direita \n");
        mtorre--;
    }

   //lógica de movimentação para cima e para direita do bispo.
    do {
        printf("Digite o número de casas que a o bispo deverá subir (digite 0, caso nao queira movê-lo): \n");
        scanf("%d", &mbispo);
        
        //um condição para caso o numero de jogadas esteja entre 1 e 7 permitidas no tabuleiro para a peça.
        if (mbispo <= 7 && mbispo >=1) {
            
            printf("O bispo movimentou para cima e para direita %d vezes.\n", mbispo);
            mbispo--;

        }   else {
            printf("número de jogadas inválido\n"); 
        
        }
        //condição para contínua execução do "do".
    } while (mbispo <= 7 && mbispo >=1); {
        printf("Bispo não foi movimentado\n");
      
    }
    //estrutura for para movimentação da rainha 7 casas à esquerda.

    printf("digite o numero de casas que a rainha deverá movimentar para direita: \n");
    scanf("%d", &mrainha);

    for (mrainha; mrainha <=7 && mrainha >=1; mrainha--) {
    printf("A rainha movimentou para esquerda\n");
    }
     
    return 0;
}