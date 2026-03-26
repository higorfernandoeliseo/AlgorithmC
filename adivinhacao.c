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
    


   

    return 0;
}