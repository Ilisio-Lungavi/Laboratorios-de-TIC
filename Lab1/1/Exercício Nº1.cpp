//Exerc�cio N�1
#include <stdio.h>
int main(){
	
	int A, lado1, lado2;
	
	printf("Digite os lados do quadrado...:");
	scanf("%i%i", &lado1, &lado2);
	
		A = lado1 * lado2;

		printf("A area do quadrado � igual a %i", A);
	
	return 0;
}