#include <stdio.h>

int main (){

    int bispo = 0, torre = 0, rainha = 0; // Inicializando as variáveis de controle
    printf("Bem-vindo ao jogo de xadrez!\n"); // Mensagem de boas-vindas
    printf("Neste jogo, você pode escolher entre três peças: bispo, torre, rainha e cavalo.\n"); // Explicação do jogo
    printf("Escolha uma das pecas do xadrez:\n"); // Solicitação para o usuário escolher uma peça
    printf("\n");

    char escolha; // Variável para armazenar a escolha do usuário
    printf("B - Bispo\n"); // Opção para o bispo
    printf("T - Torre\n"); // Opção para a torre
    printf("R - Rainha\n"); // Opção para a rainha
    printf("Digite a letra correspondente a peca escolhida: "); // Solicitação para o usuário digitar a letra correspondente à peça escolhida
    scanf(" %c", &escolha); // Leitura da escolha do usuário
    printf("\n");
 // Exibição da escolha do usuário
    switch (escolha){

    case 'B':
        printf("O bispo se moveu na diagonal cinco vezes para a direita.\n"); // Mensagem informando o movimento do bispo
        for (bispo = 0; bispo < 5; bispo++) // Loop para simular o movimento do bispo
        { 
            printf("Cima Direita.\n"); // Movimento do bispo
        }

        break;
    case 'T':
        printf("A torre se moveu em linha reta cinco vezes para a direita.\n"); // Mensagem informando o movimento da torre
        while (torre < 5) // Loop para simular o movimento da torre
        {
            printf("Direita.\n"); // Movimento da torre
            torre++; 
        }
        break;
    case 'R':
        printf("A rainha se moveu em linha reta oito vezes para a esquerda.\n"); // Mensagem informando o movimento da rainha
        for (rainha = 0; rainha < 8; rainha++) // Loop para simular o movimento da rainha
        {
            printf("Esquerda.\n");  // Movimento da rainha
        }
        break;
    default:
        printf("Escolha invalida.\n"); // Mensagem de erro caso a escolha não seja válida
        break;
    }

    return 0;
}
