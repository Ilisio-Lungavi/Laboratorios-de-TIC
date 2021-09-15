//Exercício Nº5
#include<stdio.h>
int main(){
	
	float salf, per, valor_aumento, NS;
	
		printf("Digite o salario do funcionario, o valor de percentual de aumento...:");
		scanf("%f%f", &salf, &per);
			
			valor_aumento = (salf * per)/100;
			
			printf("O valor de aumento e %f\n",valor_aumento);
		
			 NS = salf + valor_aumento;
			 
			 printf("O Novo salario e %f\n", NS);
			 
	return 0;
}