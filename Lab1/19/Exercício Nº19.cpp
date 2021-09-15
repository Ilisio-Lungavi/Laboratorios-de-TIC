//Exercício Nº19
#include<stdio.h>
	int main(){
		 
		 int fib, aux1, aux2;
		 
		 	 for(int i = 1; i < 20; i++){
				  fib = aux1 + aux2;
				  
				  printf("%i\n", fib);
				  aux1 = aux2;
				  aux2 = fib;
			  }
 
				return 0;
}