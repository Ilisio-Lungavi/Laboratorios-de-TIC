Exercício Nº4
#include<stdio.h>
int main(){
	
	float salf, NS;

		printf("Digite o salario do funcionario...:");
		scanf("%f", &salf);
		
			NS = (salf * 25)/ 100;
		
		printf("O novo salario com aumento de 25 e %f", NS); 
		
	return 0;
}