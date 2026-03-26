#include <stdio.h>

int main() {

    int a, b, c, maior = 9999, menor = 9999;

    printf("Digite 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c){
        maior = a;
    }else if(b >= a && b >= c){
        maior = b;
    }else{
        maior = c;
    }

    if(a <= b && a <= c){
        menor = a;
    }else if(b <= a && b <= c){
        menor = b;
    }else{
        menor = c;
    }

    printf("Maior numero: %d e o menor: %d", maior, menor);

    return 0;
}