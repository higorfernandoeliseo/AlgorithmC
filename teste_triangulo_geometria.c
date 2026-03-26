#include <stdio.h>

int main() {

    int a, b, c;

    printf("Digite os lados do triangulo: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a > 0 && b > 0 && c > 0){

        if((a + b) > c && (a + c) > b && (b + c) > a){

            if((a == b && a == c && b == c)){
                printf("Eh um triangulo equilatero!");
            }else if(a == b || a == c || b == c){
                printf("Eh um triangulo isoceles!");
            }else{
                printf("Eh um triangulo escaleno!");
            }

        }else{
            printf("Nao eh um triangulo.");
        }

    }else{
        printf("So eh aceito valores positivos!");
    }


    return 0;

}