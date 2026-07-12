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
    return 0;   
    }
