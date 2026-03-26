#include <stdio.h>

int main() {

    int valor;
    printf("Digite um numero: ");
    scanf("%d", &valor);

    if(valor % 2 == 0) {
        printf("%d eh divisivel por 2\n", valor);
    }else{
        printf("%d nao eh divisivel por 2\n", valor);
    }

    if(valor % 3 == 0) {
        printf("%d eh divisivel por 3\n", valor);
    }else{
        printf("%d nao eh divisivel por 3\n", valor);
    }

    if(valor % 5 == 0) {
        printf("%d eh divisivel por 5\n", valor);
    }else{
        printf("%d nao eh divisivel por 5\n", valor);
    }

    return 0;
}