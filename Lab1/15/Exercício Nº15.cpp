//Exercício Nº15
#include<stdio.h>
	int main(){
 
 	   	   int n;
 	   	   
 	   	   	   do{
						  printf("Digite o numero...:");
						  scanf("%i", &n);
						  
						  if(n >= 0){
							  printf("O sucessor de todos os números inseridos sao %i:\n", n, ( n+1 ));
						  }
						  
					  }while(n >= 0);
 	 	 	 
				return 0;
}