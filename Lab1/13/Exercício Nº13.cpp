//Exercício Nº13
#include<stdio.h>
	int main(){
 	 	 
 	 	 int n, soma=0;

    for(int i = 0; i <= 500; i++){
        	if(i % 2 != 0 && i % 3 == 0){								
			soma+= i;
				}
			
    }
    	printf("Solucao...:%i", soma);
 	 	 	 return 0;
}