#include <stdio.h>

int main() {

    int num, positivo, negativo, i;

    positivo = 0;
    negativo = 0;

    i = 0;

    do{
        printf("Digite um valor: ");
        scanf("%d", &num);

        if(num > 0){
            positivo++;
        }else if(num < 0){
            negativo++;
        }
        i++;
    }while(i < 5);

    printf("Total de positivos: %d\tTotal de negativos: %d\n\n", positivo, negativo);

    return 0;
}