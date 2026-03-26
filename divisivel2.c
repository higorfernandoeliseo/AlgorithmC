#include <stdio.h>

int main() {

    int valor;
    printf("Digite um numero: ");
    scanf("%d", &valor);

    if(valor % 2 == 0 && valor % 3 == 0 && valor % 6 == 0) {
        printf("%d eh divisivel por 2, 3 e 6!", valor);
    }else{
        printf("%d nao eh divisivel por 2, 3 e 6!", valor);
    }

    return 0;
}