#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

    int num1, num2, inversor;

    printf("///// Exercicio 1 /////\n");

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    inversor = num1;
    num1 = num2;
    num2 = inversor;

    printf("\nValores invertidos: ");
    printf("\nPrimeiro valor: %d", num1);
    printf("\nSegundo valor: %d", num2);

    printf("\n\n///// Exercicio 2 /////\n");

    double primeiroValor, numNotacao;
    int n;

    printf("Digite um valor: ");
    scanf("%lf", &primeiroValor);

    n = (int)floor(log10(primeiroValor));
    numNotacao = primeiroValor / pow(10, n);

    printf("\nNumero na forma de notacao cientifica: %.2lf x 10^%d\n", numNotacao, n);

    printf("\n\n///// Exercicio 3 /////\n");

    int valorDecimal;

    printf("Digite um valor menor OU igual 64: ");
    scanf("%d", &valorDecimal);

    if (valorDecimal <= 0 || valorDecimal > 64) {
        printf("Valor invalido!\n");
    }else {
        printf("\nRepresentacao binaria de %d: ", valorDecimal);
        printf("%d", (valorDecimal >> 7) & 1);
        printf("%d", (valorDecimal >> 6) & 1);
        printf("%d", (valorDecimal >> 5) & 1);
        printf("%d", (valorDecimal >> 4) & 1);
        printf("%d", (valorDecimal >> 3) & 1);
        printf("%d", (valorDecimal >> 2) & 1);
        printf("%d", (valorDecimal >> 1) & 1);
        printf("%d", valorDecimal & 1);
    }
    printf("\n\n///// Exercicio 4 /////\n");
    
    double salarioFixo, vendas, total;

    scanf("%lf %lf", &salarioFixo, &vendas);

    total = salarioFixo + vendas * 0.15;

    printf("TOTAL = R$ %.2f\n", total);


    return 0;
}
