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
    int num_tentativas;
    int nivel;

    printf("Bem-vindo ao jogo de adivinhacao\n");

    printf("Selecione a dificuldade:\n(1)Facil (2)Medio (3)Dificil\n");
    scanf("%d", &nivel);

    switch (nivel){
        case 1:
            num_tentativas = 20;
            break;
        case 2:
            num_tentativas = 15;
            break;
        default:
            num_tentativas = 5;
            break;
    }

    for(int i = 1; i <= num_tentativas; i++){
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
            break;
        }else if(maior){   
            printf("Tente mais baixo\n");
        }else{
            printf("Tente mais alto\n");
        }

        pontuacao = abs((chute / 2) - pontos);
    }
    printf("Fim de jogo!\n");
    printf("Tentativas: %d\n", tentativa - 1);
    printf("Sua pontuacao foi: %d", pontuacao);
}