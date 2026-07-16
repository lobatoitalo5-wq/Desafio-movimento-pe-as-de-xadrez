#include <stdio.h>
void movertorre(int casas, char peca[], char direcao[]){
    if (casas >0){
        printf("%s para %s\n", peca, direcao); // imprime "movimento da Torre"
        movertorre(casas - 1, peca, direcao); // chamada recursiva para mover a peça
        }}

int main(){

    char direcao[50];
    int casas;
    char peca[50];

    printf("Qual peca deseja mover? (Torre, Cavalo, Bispo, Rainha, Rei): ");
    scanf(" %s", &peca);
    printf("Para qual direcao deseja mover? ");
    scanf(" %s", &direcao);
    printf("Quantas casas deseja mover? ");
    scanf("%d", &casas);


    movertorre(casas, peca, direcao); // chamada da função para mover a peça

    return 0;   
}
