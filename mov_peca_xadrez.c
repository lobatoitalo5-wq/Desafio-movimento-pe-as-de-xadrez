#include <stdio.h>
int main(){
    
    // mover peça torre 5 casas para direita
        for (int T=0; T<5; T++) {
        printf("Torre para Direita\n"); // imprime "Torre para Direita" 5 vezes
    }
    
    // mover peça bispo 5 casas para direita diagonal
        int B=0;
        do {
            printf("Bispo para Direita diagonal\n"); // imprime "Bispo para Diagonal Direita" 5 vezes
            B++;}
            while (B < 5);
    
    // mover peça rainha 8 casas para esquerda
        int R=0;
        while (R<8) {
            printf("Rainha para Esquerda\n"); // imprime "Rainha para Esquerda" 8 vezes
            R++;
        }

    // mover peça cavalo
    // possiveis movimentos do cavalo e suas variaveis:
    // 1. Duas casas para frente e uma para direita = 2FD
    // 2. Duas casas para frente e uma para esquerda = 2FE
    // 3. Duas casas para trás e uma para direita = 2TD
    // 4. Duas casas para trás e uma para esquerda = 2TE
    // 5. Uma casa para frente e duas para direita = 1FD
    // 6. Uma casa para frente e duas para esquerda = 1FE
    // 7. Uma casa para trás e duas para direita = 1TD
    // 8. Uma casa para trás e duas para esquerda = 1TE
            
        int movimentoCavalo = 1;
        while (movimentoCavalo--){
            for (int i=0; i<2; i++) {
                printf("Cavalo para frente\n"); // imprime "Cavalo para frente" 2 vezes
        }
            printf("Cavalo para direita\n"); // imprime "Cavalo para direita" 1 vez
        }
    return 0;   
}
