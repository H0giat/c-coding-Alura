#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();
    int numero = numerogrande % 100;
    int chute;
    int ganhou = 0;
    int tentativa = 1;
    int pontos = 1000;
    int pontuacao;

    printf("Bem-vindo ao jogo de adivinhacao\n");

    while(ganhou == 0){
        printf("Tentativa %d\n", tentativa);
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        tentativa = tentativa + 1;

        if (chute < 0){
            printf("Numeros negativos sao invalidos!\n");
            continue;
        }

        int acertou = (chute == numero);
        int maior = (chute > numero);

        if(acertou){
            printf("Parabens, voce acertou o numero: %d!\n", numero);
            ganhou = 1;
        }else if(maior){   
            printf("Tente mais baixo\n");
        }else{
            printf("Tente mais alto\n");
        }

        pontuacao = abs((chute / 2) - pontos);
    }
    
    printf("Fim de jogo!\n");
    printf("Parabens, voce ganhou o jogo com %d tentativas!\n", tentativa - 1);
    printf("Sua pontuacao foi: %d", pontuacao);
}