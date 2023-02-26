#include <stdio.h>

// a hashtag (#) é usada para indicar diretivas

#define NUMERO_TENTATIVAS 5

/*
nomes de constantes são geralmente feitas em maiúsculo
( underscore / underline / _ ) são usadas para separar palavras na mesma variável, como mostrado acima
*/


int main(){
    int numero = 7;
    int chute;
    int acertou = (chute == numero);

    printf("Bem-vindo ao jogo de adivinhacao\n");

    for(int i = 1; i <= NUMERO_TENTATIVAS; i++){
        printf("Tentativa %d de %d\n", i, NUMERO_TENTATIVAS);
        printf("Digite seu chute: ");
        scanf("%d", &chute);

        if(acertou){
            printf("Parabens, voce acertou o numero: %d!", numero);
            break;
        }else{
            if(chute < numero){
                printf("Tente mais alto\n");
            }else{
                printf("Tente mais baixo\n");
            }
        }
    }
    printf("Fim de jogo!");
}