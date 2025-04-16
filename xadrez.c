#include <stdio.h>
#include <stdlib.h>



void mov_bispo(int casas) { // Função para mover o bispo
    if (casas == 0) {
        return;
    } 
        printf("Cima Direita.\n"); // Movimento do bispo
        mov_bispo(casas - 1); // Chamada recursiva para mover o bispo
}

void mov_torre(int casas) { // Função para mover a torre
    if (casas == 0) {
        return;
    } 
        printf("Direita.\n"); // Movimento da torre
        mov_torre(casas - 1); // Chamada recursiva para mover a torre
}

void mov_rainha(int casas) { // Função para mover a rainha
    if (casas == 0) {
        return;
    } 
        printf("Cima.\n"); // Movimento da rainha
        mov_rainha(casas - 1); // Chamada recursiva para mover a rainha
}
void mov_cavalo(int cavalo) { // Função para mover o cavalo
    while (cavalo--) { // Loop para simular o movimento do cavalo
        for (int i = 0; i < 2; i++) { 
            printf("Cima, "); // Movimento do cavalo
        }
        printf("Direita.\n"); 
    }
}

// Função principal do programa

int main (){

    // Inicializando as variáveis de controle

    printf("Bem-vindo ao jogo de xadrez!\n"); // Mensagem de boas-vindas
    printf("Neste jogo, você pode escolher entre três peças: bispo, torre, rainha e cavalo.\n"); // Explicação do jogo
    printf("Escolha uma das pecas do xadrez:\n"); // Solicitação para o usuário escolher uma peça
    printf("\n");

    char escolha; // Variável para armazenar a escolha do usuário
    printf("B - Bispo\n"); // Opção para o bispo
    printf("T - Torre\n"); // Opção para a torre
    printf("R - Rainha\n"); // Opção para a rainha
    printf("C - Cavalo\n"); // Opção para o cavalo 
    printf("Digite a letra correspondente a peca escolhida: "); // Solicitação para o usuário digitar a letra correspondente à peça escolhida
    scanf(" %c", &escolha); // Leitura da escolha do usuário
    printf("\n");


 // Exibição da escolha do usuário
    switch (escolha){

    case 'B':
        printf("O bispo se moveu na diagonal cinco vezes para a direita.\n"); // Mensagem informando o movimento do bispo
        mov_bispo(5); // Chamada da função para mover o bispo
        break;
    case 'T':
        printf("A torre se moveu em linha reta cinco vezes para a direita.\n"); // Mensagem informando o movimento da torre
        mov_torre(5); // Chamada da função para mover a torre
        break;
    case 'R':
        printf("A rainha se moveu em linha reta oito vezes para a esquerda.\n"); // Mensagem informando o movimento da rainha
        mov_rainha(8); // Chamada da função para mover a rainha
        break;
    case 'C':
        printf("O cavalo se moveu em L.\n"); // Mensagem informando o movimento do cavalo
        mov_cavalo(1); // Chamada da função para mover o cavalo
        break;
    default:
        printf("Escolha invalida.\n"); // Mensagem de erro caso a escolha não seja válida
        break;
    }

    return 0;
}