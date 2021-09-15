//Exercício Nº3
#include<stdio.h>
int main(){
	
	int idade, ano_actual, ano_nasc;
	int q, ano_qt = 2050;
	
	printf("Digite o ano actual e o ano de nascimento...:");
	scanf("%i%i", &ano_actual, &ano_nasc);
	
	idade =  ano_actual - ano_nasc;
	printf("A idade desta pessoa e %i anos de idade\n", idade);
	
		q = ano_qt - ano_nasc;

		printf("A idade que tera em 2050 e %i anos de ideda", q);
		
	return 0;
}