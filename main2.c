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
		return 0;
}
