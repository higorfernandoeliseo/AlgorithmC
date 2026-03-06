#include<stdio.h>

int chama_tabuada(int n){
   int i;
   for(i=1; i<=10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}

int main() {

    int numero;

    do{
    printf("Digite um numero positivo ou 0: ");
    scanf("%d", &numero);
    }while(numero < 0);

    chama_tabuada(numero);

    return 0;
}