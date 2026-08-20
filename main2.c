#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int idade, ano_atual, ano_nascimento;
	
	printf("///// Exercicio 1 /////\n\n");
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	
	ano_nascimento = ano_atual - idade;
	
	printf("Voce nasceu aproximadamente no ano de %d.\n", ano_nascimento);
	
	printf("\n///// Exercicio 2 /////\n\n");
	
	float quilometros_por_hora, metros_por_segundo;
	
	printf ("Digite a velocidade em km/h: ");
	scanf("%f", &quilometros_por_hora);
	
	metros_por_segundo = quilometros_por_hora / 3.6;
	
	printf("A velocidade em m/s e %.2f.\n", metros_por_segundo);
	
	printf("\n///// Exercicio 3 /////\n\n");
	
	float reais, dolares, cotacao_dolar;
	
	printf("Escreva o valor em reais: ");
	scanf("%f", &reais);
	
	printf("Escreva a cotacao do dolar: ");
	scanf("%f", &cotacao_dolar);
	
	dolares = reais / cotacao_dolar;
	
	printf("O valor em dolares e U$ %.2f.\n", dolares);
	
	printf("\n///// Exercicio 4 /////\n\n");
	
	float celsius, fahrenheit;
	
	printf("Digite a temperatura em graus celsius: ");
	scanf("%f", &celsius);
	
	fahrenheit = celsius * (9.0/5.0) + 32.0;
	
	printf("A temperatura em fahrenheit e %.2f.\n", fahrenheit);
	
	printf("\n///// Exercicio 5 /////\n\n");
	
	float graus, radianos;
	const float PI = 3.141592;
	
	printf("Digite o angulo em graus: ");
	scanf("%f", &graus);
	
	radianos = graus * (PI / 180.0);
	
	printf("O angulo em radianos e %.3f.\n", radianos);

	printf("\n///// Exercicio 6 /////\n\n");
	
	int numero;
	
	printf("Escreva um numero inteiro: ");
	scanf("%d", &numero);
	
	printf("O valor antecessor e: %d\n", numero - 1);
	printf("O valor sucessor e: %d\n", numero + 1);
	
	printf("\n///// Exercicio 7 /////\n\n");
	
	double total = 780000.00;
	double primeiro, segundo, terceiro;
	
	primeiro = total * 0.46;
	segundo = total * 0.32;
	terceiro = total - primeiro - segundo;
	
	printf("Primeiro ganhador R$ %.2f\n", primeiro);
	printf("Segundo ganhador R$ %.2f\n", segundo);
	printf("Terceiro ganhador R$ %.2f\n", terceiro);
	
	printf("\n///// Exercicio 8 /////\n\n");
	
	int tempo, segundos, minutos, horas;
	
	printf("Insira o tempo em segundos dos eventos da fabrica: ");
	scanf("%d", &tempo);
	
	horas = tempo / 3600;
	minutos = (tempo % 3600) / 60;
	segundos = tempo % 60;
	
	printf("%d:%d:%d\n", horas, minutos, segundos);
	
	printf("\n///// Exercicio 9 /////\n\n");
	
	int tempo_perco, velocidade;
	float distancia, litros;
	
	printf("Digite o tempo da viagem em horas:\n");
	scanf("%d", &tempo_perco);
	
	printf("Digite a velocidade media em km/h:\n");
	scanf("%d", &velocidade);
	
	distancia = tempo_perco * velocidade;
	litros = distancia / 12.0;
	
	printf("Litros gastos: %.3f\n", litros);
	
	printf("\n///// Exercicio 10 /////\n\n");
	int a, b, c;
	int maiorAB, maior;
	
	printf("Digite tres valores:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	maiorAB = (a + b + abs(a - b)) / 2;
	maior = (maiorAB + c + abs(maiorAB - c)) /2;
	
	printf("%d eh o maior\n", maior);

	printf("\n///// Exercicio 10 /////\n\n");
	int a, b, c;
	int maiorAB, maior;
	
	printf("Digite tres valores:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	maiorAB = (a + b + abs(a - b)) / 2;
	maior = (maiorAB + c + abs(maiorAB - c)) /2;
	
	printf("%d eh o maior\n", maior);
	
		return 0;
}
