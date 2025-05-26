#include <stdio.h>

// Desafio de Xadrez - MateCheck


int main() {
    int rainha = 1, bispo = 1, torre =1; // Variáveis para contar o número de casas que cada peça anda
        printf("Os movimentos são:\n");

       for (rainha = 1; rainha <= 8; rainha++){  // FOR,  movimenta a rainha para cima, de 1 a 8 casas
        printf( "rainha cima: %d casa\n", rainha);  // Mostra quantas casas a rainha andou para cima
   }

   while (bispo <=5) // While, movimenta o bispo para cima/direita, de 1 a 5 casas
 {
    printf("bispo cima/direita: %d casa\n", bispo);  // Mostra quantas casas o bispo andou na diagonal cima a direita 
    bispo++;  // Incrementa o número de casas
 }
   do{
    printf("torre direta: %d casa\n", torre);  // Mostra quantas casas a torre andou
    torre++; // Incrementa o número de casas
    
   } while (torre <= 5); // DO-WHILE movimenta a torre para a direita, de 1 a 5 casas
   

      return 0;
}












    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


