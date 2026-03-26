#include<stdio.h>
#include<stdlib.h>

int main() {

    int chute, numerosecreto = 42;

    for(int i = 1; i <= 3; i++) {
        printf("Digite o %do chute: ", i);
        scanf("%d", &chute);

        int acerto = chute == numerosecreto;

        printf("Valor do chute: %d\n", chute);

        if(acerto){
            printf("Parabens!! voce acertou!!\n");
            break;
        }else{
            int maior = chute > numerosecreto;

            if(maior){
                printf("O chute eh maior que o numero secreto!\n");
            }else{
                printf("O chute eh menor que o numero secreto!\n");
            }
        }

    }

    return 0;
}