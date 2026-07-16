#include <stdio.h>

// metodo recursivo para mover qualquer peça do xadrez
void moverpeca(int casas, char peca[], char direcao[]){
    if (casas >0){
        printf("%s para %s\n", peca, direcao); // imprime a peca e a direção
        moverpeca(casas - 1, peca, direcao); // chamada recursiva para mover a peça
        }}


//execução

int main(){

    char direcao[50]; //variável para armazenar a direção do movimento
    int casas; //variável para armazenar o número de casas a serem movidas
    char peca[50]; //variável para armazenar o nome da peça a ser movida

    // solicita ao usuário a peça, direção e número de casas a serem movidas
    printf("Qual peca deseja mover? (Torre, Cavalo, Bispo, Rainha, Rei): "); 
    scanf(" %s", &peca);
    printf("Para qual direcao deseja mover? ");
    scanf(" %s", &direcao);
    printf("Quantas casas deseja mover? ");
    scanf("%d", &casas);

// chama a função para mover a peça com os parâmetros fornecidos pelo usuário
    moverpeca(casas, peca, direcao); // chamada da função para mover a peça

    return 0;   
}
