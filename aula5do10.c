#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que LEIA 10 valores do teclado, 
e mostre na tela o maior entre os 5 primeiros 
e o menor entre os 5 restantes */


int comp_maior (int a, int b){
	if (a>b)return a;
	else return b;
}

int main(int argc, char *argv[]) {
	int valor[10];
	int i;
	
	printf("Leia os numeros\n");
	// PARA ( INICIAL; CONDICAO; INCREMENTO)
	for(i=0; i<10; i++){
		scanf("%d",&valor[i]);
	}
	
	for(i = 9; i >= 0; i--){
		printf("%d", valor[i]);
		if(i > 0){
			printf(" - ");
		}
	}
	
	for(i=1, maior=valor[0]; i<5; i=i+2){
		int comp_temp = compara(valor[i], valor[i + 1]);
		maior = compara(maior, comp_temp);
	}
	
	printf("\n %d", maior);
	
	return 0;
}
