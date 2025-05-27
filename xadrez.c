#include <stdio.h>

// Desafio de Xadrez - MateCheck


int main() {
    int rainha = 1, bispo = 1, torre =1, movcavalo = 1; // Variáveis para contar o número de casas que cada peça anda

    printf("Os movimentos são:\n");
    printf("\n"); // Apenas espaço para ficar mais limpo
    printf("Os movimentos da rainha são:\n");
       for (rainha = 1; rainha <= 8; rainha++){  // FOR,  movimenta a rainha para cima, de 1 a 8 casas
        printf( "rainha cima: %d casa\n", rainha);  // Mostra quantas casas a rainha andou para cima
   }

   printf("\n"); // Apenas espaço para ficar mais limpo
   printf("Os movimentos do bispo são:\n");
   while (bispo <=5) // While, movimenta o bispo para cima/direita, de 1 a 5 casas
 {
    printf("bispo cima/direita: %d casa\n", bispo);  // Mostra quantas casas o bispo andou na diagonal cima a direita 
    bispo++;  // Incrementa o número de casas
 }

   printf("\n"); // Apenas espaço para ficar mais limpo
   printf("Os movimentos da torre são:\n");
   do{
    printf("torre direta: %d casa\n", torre);  // Mostra quantas casas a torre andou
    torre++; // Incrementa o número de casas
    
   } while (torre <= 5); // DO-WHILE movimenta a torre para a direita, de 1 a 5 casas
   
   printf("\n"); // Apenas espaço para ficar mais limpo

   printf("Os movimentos do cavalo são:\n");

    // Loop while com decremento: executa enquanto movcavalo for diferente de 0
   // Neste caso, movcavalo começa em 1, então o bloco será executado apenas 1 vez
   while (movcavalo --)
   {
     for (int cavalo = 1; cavalo < 3; cavalo++)  // Loop for interno: simula o movimento do cavalo "duas casas para cima"
     {
        printf("Cavalo cima: %d casa\n", cavalo); // Imprime o movimento do cavalo 
     }
     printf("Cavalo direita: 1 casa\n"); // Após subir 2 casas, o cavalo vai 1 casa para a direita
   }
   printf("\n"); //Print do espaço pra ficar mais limpo
   
   
   
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


