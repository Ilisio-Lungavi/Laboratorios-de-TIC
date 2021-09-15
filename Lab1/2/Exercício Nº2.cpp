//Exercício 2
#include<stdio.h>
int main(){
	
	float sal_mim, sal_func;
	int q;
	
	printf("Digite o salario minimo e o salario do funcionario...:");
	scanf("%f%f", &sal_mim, &sal_func);
	
		q = sal_func / sal_mim;

		printf(" A quantidade de salario minimo e %i", q);
		
	return 0;
}