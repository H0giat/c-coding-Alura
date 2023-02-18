#include <stdio.h>

int main(){

    // assim que faz um comentário de linha

    /*
        assim que faz um comentário de bloco,
        caso precise
    */

    printf("Hello world\n");
    printf("Tetando quebra\nde linha\n");

    int numero = 7;
    int chute;

    // printf("Adoro o numero %d", numero);

    printf("Qual o numero que pensei?: ");
    scanf("%d", &chute);    // é obrigatório aquele '&' para ler entrada de usuários | scanf é para ler do teclado
    printf("Seu chute foi: %d", chute);
}