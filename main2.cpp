#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, firstValid, secondValid;
	
	printf("Digite seu CPF nessa formataçao - x x x . x x x . x x x - x x: \n");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11);
	
	
	printf("Esta correto? %d%d%d.%d%d%d.%d%d%d-%d%d\n", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11);
	printf("1 - SIM | 2 - NAO\n");
	printf("Digite aqui: ");
	scanf("%d", &secondValid);
	
	if(secondValid == 1){
	
		firstValid = ((num1 * 10) + (num2 * 9) + (num3 * 8) + (num4 * 7) + (num5 * 6) + (num6 * 5) + (num7 * 4) + (num8 * 3) + (num9 * 2)) * 10;
		firstValid = firstValid % 11;
		
		if(firstValid == num10){
			firstValid = ((num1 * 11) + (num2 * 10) + (num3 * 9) + (num4 * 8) + (num5 * 7) + (num6 * 6) + (num7 * 5) + (num8 * 4) + (num9 * 3) + (num10 * 2)) * 10;
			firstValid = firstValid % 11;
			
			if(firstValid == 10){
				
				firstValid = 0;
				
				if(firstValid == num11){
					printf("\n\nSeu CPF eh valido!");
				}else{
					printf("\n\nSeu CPF eh invalido!");
				}
			}else{
				
				if(firstValid == num11){
					printf("\n\nSeu CPF eh valido!");
				}else{
					printf("\n\nSeu CPF eh invalido!");
				}
			}
		}else{
			printf("\n\nEsse CPF eh invalido");
		}
	}else{
		printf("\n\nExecute o codigo novamente...");
	}
	
	
	
	
	
	return 0;
}
