#include <stdio.h>
#include <stdlib.h>        // adicina biblioteca para funções, como abs() que retorna o número absoluto de uma variável ou o próprio número
#include <time.h>          // adiciona biblioteca para mudar a semente do método rand

int main(){
    int segundos = time(0);
    srand(segundos);                // gera uma semente diferente para aleatoriezar um número
    int numerogrande = rand();      // função para gerar um número aleatório
    int numero = numerogrande % 100;
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
    
    printf("Fim de jogo!\n");
    printf("Parabens, voce ganhou o jogo com %d tentativas!\n", tentativa - 1);
}