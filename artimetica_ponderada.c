#include <stdio.h>

int main() {

    char opcao;
    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    getchar();

    printf("\nEscolha uma opcao: \na = media aritmerica\np = media ponderada\n\nDigite a opcao: ");
    scanf("%c", &opcao);

    switch (opcao){
    case 'a':
        printf("A media artimetica: %.1f", (n1+n2+n3)/3);
        break;
    case 'p':
        printf("A media ponderada: %.1f", (n1 * 3 + n2 * 3 + n3 * 4)/10);
        break;
    default:
        printf("Opcao invalida!");
        break;
    }

    return 0;

}