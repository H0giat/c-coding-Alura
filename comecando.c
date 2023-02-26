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

    printf("Bem-vindo ao jogo de adivinhacao\n");

    for(int i = 1; i <= NUMERO_TENTATIVAS; i++){
        printf("Tentativa %d de %d\n", i, NUMERO_TENTATIVAS);
        printf("Digite seu chute: ");
        scanf("%d", &chute);

        int acertou = (chute == numero); // esse tipo de variável deve vir após o scanf, senão quebra o código
        int maior = (chute > numero);    // pois não dá para comparar o número antes do scanf, pois não tem nada nele

        if(acertou){    // é declarado como int, pois retorna como 1(verdadeiro) e 0(falso)
            printf("Parabens, voce acertou o numero: %d!\n", numero);
            break;
        }else{
            if(maior){
                printf("Tente mais baixo\n");
            }else{
                printf("Tente mais alto\n");
            }
        }
    }
    printf("Fim de jogo!");
}