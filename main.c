#include <stdio.h>
#include <stdlib.h>

/* faça um programa que Leia 10 numeros inteiros postivios, calcule a soma e a média e mostre na tela.
OBS: somente com 3 variaveis (i, n, s). Nao pode ser vetor.
Nao pode usar laço FOR*/

int main(int argc, char *argv[]) {
	int i, n, s;
	
	while (i<10){
		scanf("%d", &n);
		if (n > 0){
			s += n;
			i++;
		}
		
	}
	printf("%d | %d", s, s/10);
	
	return 0;
}
