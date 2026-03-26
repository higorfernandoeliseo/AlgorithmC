#include<stdio.h>

int main() {

    float taxCambio = 5.30;
    int opcao;
    float valor;

    printf("Conversor de moedas: \n");
    printf("Escolha as opcoes:\n\n1 = real > dolar\n2 = dolar > real\n\n");

    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        
        printf("Digite o valor em real: ");
        scanf("%f", &valor);

        printf("o valor R$ %.2f em dolar: U$D %.2f", valor, valor / taxCambio);
        break;
    case 2:
        
        printf("Digite o valor em dolar: ");
        scanf("%f", &valor);

        printf("o valor U$D %.2f em reais: R$ %.2f", valor, valor * taxCambio);

        break;
    
    default:
        printf("Opcao invalida!");
        break;
    }

    return 0;
}