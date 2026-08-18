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
    
	int n, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2, bit_1;
	printf("insira o valor a ser convertido menor OU igual a 64: ");
	scanf("%d",&n);
	
	bit_64 = n%2;
	res = res/2;
	
	bit_32 = res%2;
	res = res/2;
	
	bit_16 = res%2;
	res = res/2;
	
	bit_8 = res%2;
	res = res/2;
	
	bit_4 = res%2;
	res = res/2;
	
	bit_2 = res%2;
	res = res/2;
	
	printf("O numero %d em bin = %d%d%d%d%d%d%d", n, res%2, bit_2,bit_4,bit_8,bit_16,bit_32,bit_64);
    
    printf("\n\n///// Exercicio 4 /////\n");
     double salarioFixo, vendas, total;

    printf("Insira o salario fixo do vendedor: ");
    scanf("%lf", &salarioFixo);

    printf("Insira o valor total das vendas: ");
    scanf("%lf", &vendas);

    total = salarioFixo + (vendas * 0.15);

    printf("Total a receber no final do mes: R$ %.2f\n", total);
    
    printf("\n\n///// Exercicio 5 /////\n");
    double a, b, c, d;
    double soma, media, produtorio;

    printf("Digite 4 valores: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    soma = a + b + c + d;
    media = soma / 4;
    produtorio = a * b * c * d;

    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Produtorio: %.2f\n", produtorio);

    printf("\n\n///// Exercicio 6 /////\n");
     int idadeDias, anos, meses, dias;

    printf("Digite a idade em dias: ");
    scanf("%d", &idadeDias);

    anos = idadeDias / 365;
    idadeDias = idadeDias % 365;

    meses = idadeDias / 30;
    dias = idadeDias % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    
    printf("\n\n///// Exercicio 7 /////\n");
    double raio, volume;
    
    printf ("Digite o valor do raio:");
    scanf("%lf", &raio);
    
    volume = (4/3.0) * 3.14159 * (raio*raio*raio);
    
    printf("O volume da esfera é: %.2lf", volume);
    
    printf("\n\n///// Exercicio 8 /////\n");
    
    double x1,x2,y1,y2;
    double distancia;
    
    printf("Digite os valores x1,y1 e x2,y2: ");
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    
    distancia = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    
    printf("A distancia dos valores e: %.2lf", distancia);


    return 0;
}
