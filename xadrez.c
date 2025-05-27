#include <stdio.h>

// Função recursiva que simula o movimento da torre
void movitorre(int torre) {
    if (torre > 0) {  // Condição para encerrar movimentos da torre, maior que 0, caso não encerra
        printf("Torre move para a direita: 1 casa\n");  // Imprime o movimento
        movitorre(torre - 1); // Chamada recursiva reduz 1 movimento ate 0, (conforme condição do if)
    }
}

// Função recursiva que simula o movimento da rainha
void movirainha(int rainha) {
    if (rainha > 0) {  // Condição para encerrar os movimentos da rainha precisa ser maior que 0, caso não encerra
        printf("Rainha move para a esquerda: 1 casa\n");  // Imprime o movimento
        movirainha(rainha - 1); // Chamada recursiva reduz 1 movimento ate 0, (conforme condição do if)
    }
}

// Função recursiva que simula o movimento do bispo
void movibispo(int bispo) { // Condição para encerrar, bispo maior que 0, caso não encerra 
    if (bispo > 0) {
        printf("Bispo move na diagonal cima/direita: 1 casa\n");  // Imprime o movimento
        movibispo(bispo - 1); // Chamada recursiva reduz 1 movimento ate 0, (conforme condição do if)
    }
}

int main() {
    printf("Movimentos da TORRE:\n");  
    movitorre(5); // Ao atribuir 5 no movitorre faz a torre movimentar 5 casas

    printf("\nMovimentos da RAINHA:\n");  // O n no inicio é uma linha em branco para separar visualmente os blocos
    movirainha(8); // Ao atribuir 8 no movirainha faz a torre movimentar 8 casas

    printf("\nMovimentos do BISPO:\n"); 
    movibispo(5); // Ao atribuir 8 no movirainha faz a torre movimentar 8 casas

   printf("\n");
   int movcavalo = 1;
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

   