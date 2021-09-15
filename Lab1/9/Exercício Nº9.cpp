//Exercício Nº9
#include <stdio.h>
	int main(){
		
		int PSR, RPG;
		
		printf("Digite o peso do saco de racao:");
		scanf("%i", &PSR);
		
		printf("Digite a quantidade de racao para cada gato:");
		scanf("%i", &RPG);
		
		PSR *= 1000;
		
		for(int i = 0; i < 5; i++){
			PSR -= ( RPG * 2 );
			PSR / 1000.0;
		}
			printf("Apos cinco dias restara %f kg de racao", PSR);
	
	return 0;
}