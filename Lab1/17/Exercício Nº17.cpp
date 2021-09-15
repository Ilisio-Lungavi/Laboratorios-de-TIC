//Exercício Nº17
#include<stdio.h>
	int main(){
		
			int n, result;
			
				printf("Digite o numero...:\n");
				scanf("%i", n);
				
				for(int i= n; i >= 1; i--){
					if(i != 1){
						printf("%i X", i);
					}else{
						printf("%i = ", i);
					}
					result *= i;
				}
				
				printf("%i e a solucao", result4);
 
				return 0;
}