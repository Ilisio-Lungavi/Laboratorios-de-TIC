//Exercício Nº14
#include<stdio.h>
	int main(){
 
 	   	   	   int n, contp, contim, somap, somaim;
 	   	   	   float mediap, mediaim;
 	   	   	   
 	   	   	   for(int i= 1; i<10; i++){
						  printf("Digite os numeros...:");
						  scanf("%i",&n);
						   
						   	   if(n%2 == 0){
									  somap += n;
									  contp++;
								  }else{
									  somaim += n;
									  contim++;
								  }
					  }
					  
					  mediap = (somap / contp);
					  mediaim = (somaim / contim);
					  
					  printf("A media dos numeros pares sao:%f\n", mediap);
					  printf("A media dos numeros impares sao:%f", mediaim);
 	 	 	 
				return 0;
}