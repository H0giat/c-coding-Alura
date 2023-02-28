#include <stdio.h>

int main(){
    int numero = 7;
    int chute;
    int ganhou = 0;
    int tentativa = 1;

    printf("Bem-vindo ao jogo de adivinhacao\n");

    while(ganhou == 0){
        printf("Tentativa %d\n", tentativa);
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        tentativa = tentativa + 1;    // ou tentativa++; -> sempre adiciona 1

        if (chute < 0){
            printf("Numeros negativos sao invalidos!\n");
            continue;
        }

        int acertou = (chute == numero);
        int maior = (chute > numero);

        if(acertou){
            printf("Parabens, voce acertou o numero: %d!\n", numero);
            // break;
            ganhou = 1;
        }else if(maior){   
            printf("Tente mais baixo\n");
        }else{
            printf("Tente mais alto\n");
        }
    }
    printf("Fim de jogo!");
    printf("Parabens, voce ganhou o jogo com %d tentativas!\n", tentativa - 1);
}