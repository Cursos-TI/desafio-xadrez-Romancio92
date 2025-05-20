#include <stdio.h>

void movimentotorre (int t) {
    if (t > 0) {
        printf("A torre foi movimentada para direita. \n");
        movimentotorre (t - 1);
    }
}

void movimentorainha (int r) {
    if (r > 0) {
        printf("A rainha foi movimentada para esquerda \n");
        movimentorainha (r - 1);
    }
}

void movimentobispo (int b) {
    if (b > 0) {
        printf("O Bispo movimento para cima e para direita \n");
        movimentobispo (b - 1);
    }
}



int main (){

    int mtorre, mbispo1, mbispo2, mrainha, mcavalo1, mcavalo2;

    movimentotorre (5); // chamada da função recursiva definida anteriormente;
    
    movimentorainha (7); // chamada da função recursiva definida anteriormente;

    movimentobispo (5); // chamada da função recursiva definida anteriormente;

    for (mcavalo1 = 2, mcavalo2 = 1; mcavalo1 > 0 && mcavalo1 <= 2, mcavalo2 > 0 && mcavalo2 <= 1 ;mcavalo1--,mcavalo2--) {
        
        printf("O cavalo foi movimentado para cima. \n");     
        printf("O cavalo foi movimentado para cima. \n");  
        printf("O cavalo foi movimentado para direita \n");
      
    }
    

    return 0;
}