#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int opcao;

    printf("====================================\n");
    printf("       MENU DE EXERCICIOS\n");
    printf("====================================\n");
    printf("1 - Inverter dois valores\n");
    printf("2 - Notacao cientifica\n");
    printf("3 - Converter para binario\n");
    printf("4 - Salario do vendedor\n");
    printf("5 - Soma, media e produtorio\n");
    printf("6 - Idade em anos, meses e dias\n");
    printf("7 - Volume da esfera\n");
    printf("8 - Distancia entre dois pontos\n");
    printf("====================================\n");

    printf("Escolha um exercicio: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1: {
            int num1, num2, inversor;

            printf("\n///// Exercicio 1 /////\n");

            printf("Digite o primeiro valor: ");
            scanf("%d", &num1);

            printf("Digite o segundo valor: ");
            scanf("%d", &num2);

            inversor = num1;
            num1 = num2;
            num2 = inversor;

            printf("\nValores invertidos:");
            printf("\nPrimeiro valor: %d", num1);
            printf("\nSegundo valor: %d\n", num2);

            break;
        }

        case 2: {
            double primeiroValor, numNotacao;
            int expoente;

            printf("\n///// Exercicio 2 /////\n");

            printf("Digite um valor: ");
            scanf("%lf", &primeiroValor);

            expoente = (int)floor(log10(primeiroValor));
            numNotacao = primeiroValor / pow(10, expoente);

            printf("\nNumero na forma de notacao cientifica: %.2lf x 10^%d\n",
                   numNotacao, expoente);

            break;
        }

        case 3: {
            int numero, res;
            int bit_64, bit_32, bit_16, bit_8;
            int bit_4, bit_2, bit_1;

            printf("\n///// Exercicio 3 /////\n");

            printf("Insira o valor a ser convertido menor ou igual a 64: ");
            scanf("%d", &numero);

            res = numero;

            bit_1 = res % 2;
            res = res / 2;

            bit_2 = res % 2;
            res = res / 2;

            bit_4 = res % 2;
            res = res / 2;

            bit_8 = res % 2;
            res = res / 2;

            bit_16 = res % 2;
            res = res / 2;

            bit_32 = res % 2;
            res = res / 2;

            bit_64 = res % 2;

            printf("O numero %d em binario = %d%d%d%d%d%d%d\n",
                   numero, bit_64, bit_32, bit_16,
                   bit_8, bit_4, bit_2, bit_1);

            break;
        }

        case 4: {
            double salarioFixo, vendas, total;

            printf("\n///// Exercicio 4 /////\n");

            printf("Insira o salario fixo do vendedor: ");
            scanf("%lf", &salarioFixo);

            printf("Insira o valor total das vendas: ");
            scanf("%lf", &vendas);

            total = salarioFixo + (vendas * 0.15);

            printf("Total a receber: R$ %.2f\n", total);

            break;
        }

        case 5: {
            double a, b, c, d;
            double soma, media, produtorio;

            printf("\n///// Exercicio 5 /////\n");

            printf("Digite 4 valores: ");
            scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

            soma = a + b + c + d;
            media = soma / 4;
            produtorio = a * b * c * d;

            printf("Soma: %.2f\n", soma);
            printf("Media: %.2f\n", media);
            printf("Produtorio: %.2f\n", produtorio);

            break;
        }

        case 6: {
            int idadeDias, anos, meses, dias;

            printf("\n///// Exercicio 6 /////\n");

            printf("Digite a idade em dias: ");
            scanf("%d", &idadeDias);

            anos = idadeDias / 365;
            idadeDias = idadeDias % 365;

            meses = idadeDias / 30;
            dias = idadeDias % 30;

            printf("%d ano(s)\n", anos);
            printf("%d mes(es)\n", meses);
            printf("%d dia(s)\n", dias);

            break;
        }

        case 7: {
            double raio, volume;

            printf("\n///// Exercicio 7 /////\n");

            printf("Digite o valor do raio: ");
            scanf("%lf", &raio);

            volume = (4.0 / 3.0) * 3.14159 * (raio * raio * raio);

            printf("O volume da esfera e: %.2lf\n", volume);

            break;
        }

        case 8: {
            double x1, x2, y1, y2;
            double distancia;

            printf("\n///// Exercicio 8 /////\n");

            printf("Digite x1: ");
            scanf("%lf", &x1);

            printf("Digite y1: ");
            scanf("%lf", &y1);

            printf("Digite x2: ");
            scanf("%lf", &x2);

            printf("Digite y2: ");
            scanf("%lf", &y2);

            distancia = sqrt((x2 - x1) * (x2 - x1) +
                             (y2 - y1) * (y2 - y1));

            printf("A distancia entre os pontos e: %.2lf\n", distancia);

            break;
        }

        default:
            printf("\nOpcao invalida!\n");
    }

    return 0;
}
