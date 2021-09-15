//Exercício Nº6
#include<stdio.h>
int main(){
	
	float custo, convite;
	int q_convites;
	
		printf("Digite o valor do custo do espetaculo, e o valor do custo do convite...:");
		scanf("%f%f", &custo, &convite);
			
			q_convites = custo / convite;
			
			printf("A quantidade de convites que devem ser vendidos para que pelo menos o custo do espetaculo seja alcancado e %i", q_convites);
			 
	return 0;
}