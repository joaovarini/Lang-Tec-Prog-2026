```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int opcao;

    printf("///// MENU DE EXERCICIOS /////\n\n");

    printf("1 - Exercicio 1\n");
    printf("2 - Exercicio 2\n");
    printf("3 - Exercicio 3\n");
    printf("4 - Exercicio 4\n");
    printf("5 - Exercicio 5\n");
    printf("6 - Exercicio 6\n");
    printf("7 - Exercicio 7\n");
    printf("8 - Exercicio 8\n");
    printf("9 - Exercicio 9\n");
    printf("10 - Exercicio 10\n");
    printf("11 - Exercicio 10 feito em sala\n");

    printf("\nEscolha o exercicio: ");
    scanf("%d", &opcao);

    switch(opcao) {

        case 1: {
            int idade, ano_atual, ano_nascimento;

            printf("\n///// Exercicio 1 /////\n\n");

            printf("Digite sua idade: ");
            scanf("%d", &idade);

            printf("Digite o ano atual: ");
            scanf("%d", &ano_atual);

            ano_nascimento = ano_atual - idade;

            printf("Voce nasceu aproximadamente no ano de %d.\n", ano_nascimento);

            break;
        }

        case 2: {
            float quilometros_por_hora, metros_por_segundo;

            printf("\n///// Exercicio 2 /////\n\n");

            printf("Digite a velocidade em km/h: ");
            scanf("%f", &quilometros_por_hora);

            metros_por_segundo = quilometros_por_hora / 3.6;

            printf("A velocidade em m/s e %.2f.\n", metros_por_segundo);

            break;
        }

        case 3: {
            float reais, dolares, cotacao_dolar;

            printf("\n///// Exercicio 3 /////\n\n");

            printf("Escreva o valor em reais: ");
            scanf("%f", &reais);

            printf("Escreva a cotacao do dolar: ");
            scanf("%f", &cotacao_dolar);

            dolares = reais / cotacao_dolar;

            printf("O valor em dolares e U$ %.2f.\n", dolares);

            break;
        }

        case 4: {
            float celsius, fahrenheit;

            printf("\n///// Exercicio 4 /////\n\n");

            printf("Digite a temperatura em graus celsius: ");
            scanf("%f", &celsius);

            fahrenheit = celsius * (9.0/5.0) + 32.0;

            printf("A temperatura em fahrenheit e %.2f.\n", fahrenheit);

            break;
        }

        case 5: {
            float graus, radianos;
            const float PI = 3.141592;

            printf("\n///// Exercicio 5 /////\n\n");

            printf("Digite o angulo em graus: ");
            scanf("%f", &graus);

            radianos = graus * (PI / 180.0);

            printf("O angulo em radianos e %.3f.\n", radianos);

            break;
        }

        case 6: {
            int numero;

            printf("\n///// Exercicio 6 /////\n\n");

            printf("Escreva um numero inteiro: ");
            scanf("%d", &numero);

            printf("O valor antecessor e: %d\n", numero - 1);
            printf("O valor sucessor e: %d\n", numero + 1);

            break;
        }

        case 7: {
            double total = 780000.00;
            double primeiro, segundo, terceiro;

            printf("\n///// Exercicio 7 /////\n\n");

            primeiro = total * 0.46;
            segundo = total * 0.32;
            terceiro = total - primeiro - segundo;

            printf("Primeiro ganhador R$ %.2f\n", primeiro);
            printf("Segundo ganhador R$ %.2f\n", segundo);
            printf("Terceiro ganhador R$ %.2f\n", terceiro);

            break;
        }

        case 8: {
            int tempo, segundos, minutos, horas;

            printf("\n///// Exercicio 8 /////\n\n");

            printf("Insira o tempo em segundos dos eventos da fabrica: ");
            scanf("%d", &tempo);

            horas = tempo / 3600;
            minutos = (tempo % 3600) / 60;
            segundos = tempo % 60;

            printf("%d:%d:%d\n", horas, minutos, segundos);

            break;
        }

        case 9: {
            int tempo_perco, velocidade;
            float distancia, litros;

            printf("\n///// Exercicio 9 /////\n\n");

            printf("Digite o tempo da viagem em horas:\n");
            scanf("%d", &tempo_perco);

            printf("Digite a velocidade media em km/h:\n");
            scanf("%d", &velocidade);

            distancia = tempo_perco * velocidade;
            litros = distancia / 12.0;

            printf("Litros gastos: %.3f\n", litros);

            break;
        }

        case 10: {
            int a, b, c;
            int maiorAB, maior;

            printf("\n///// Exercicio 10 /////\n\n");

            printf("Digite tres valores:\n");
            scanf("%d %d %d", &a, &b, &c);

            maiorAB = (a + b + abs(a - b)) / 2;
            maior = (maiorAB + c + abs(maiorAB - c)) / 2;

            printf("%d eh o maior\n", maior);

            break;
        }

        case 11: {
            int a, b, c, maior_temp, maior;

            printf("\n///// Exercicio 10 feito em sala /////\n\n");

            printf("Insira os valores a serem comparados:\n");
            scanf("%d %d %d", &a, &b, &c);

            maior_temp = ((a + b) + abs(a - b)) / 2;
            maior = ((maior_temp + c) + abs(maior_temp - c)) / 2;

            printf("O maior entre [%d][%d][%d] = %d\n", a, b, c, maior);

            break;
        }

        default:
            printf("\nOpcao invalida!\n");
    }

    return 0;
}
