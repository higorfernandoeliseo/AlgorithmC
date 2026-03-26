#include<stdio.h>
#include<stdlib.h>

int main() {

    int chute, numerosecreto = 42;
    int acertou = 0;
    int tentativas = 1;
    while (1){
        
        printf("Digite o %do chute: ", tentativas);
        scanf("%d", &chute);

        if(chute < 0) {
            printf("Nao eh permitido numeros negativos!\n");
            continue;
        }

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou){
            printf("Parabens!!! voce venceu!");
            break;
        }else if(maior){
            printf("O chute digitado eh maior que o numero secreto!!\n");
        }else{
            printf("O chute digitado eh menor que o numero secreto!!\n");
        }

        tentativas++;

    }
    


    // for(int i = 1; i <= 3; i++) {
    //     printf("Digite o %do chute: ", i);
    //     scanf("%d", &chute);

    //     int acerto = chute == numerosecreto;

    //     printf("Valor do chute: %d\n", chute);

    //     if(acerto){
    //         printf("Parabens!! voce acertou!!\n");
    //         break;
    //     }else{
    //         int maior = chute > numerosecreto;

    //         if(maior){
    //             printf("O chute eh maior que o numero secreto!\n");
    //         }else{
    //             printf("O chute eh menor que o numero secreto!\n");
    //         }
    //     }

    // }

    return 0;
}