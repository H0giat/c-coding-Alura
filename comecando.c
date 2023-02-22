#include <stdio.h>

int main(){
    int numero = 7;
    int chute;

    printf("Bem-vindo ao jogo de adivinhacao\n");

    for(int i = 1; i <= 3; i++){
        printf("Tentativa %d de 3\n", i);
        printf("Digite seu chute: ");
        scanf("%d", &chute);

        if(chute == numero){
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
}