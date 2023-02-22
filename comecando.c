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

    printf("Digite seu chute: ");
    scanf("%d", &chute);

    if(chute == numero){
        printf("Parabens, voce acertou o numero: %d!", numero);
    }else{
        printf("Nao foi desssa vez, mas continue tentando!!!");
    }
}