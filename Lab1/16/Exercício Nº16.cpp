//Exercício Nº16
#include<stdio.h>
	int main(){
 
 	   	   	   float altura, maior_altura, menor_altura;
 	   	   	   
 	 			   for(int i= 1; i<15; i++){  	   	   
 	   	   	   	   printf("Digite a altura da 15 pessoas...:");
 	   	   	   	   scanf("%f", altura);
 	   	   	   	   	   if( i==1 )
 	   	   	   	   	   	menor_altura = altura;
 	   	   	   	   	   if(altura > maior_altura)
 	   	   	   	   	   	maior_altura = altura;
 	   	   	   	   	   if(altura < menor_altura)
 	   	   	   	   	   	menor_altura = altura;								
	   	   	   	}
 	   	   	   	   printf("a) A menor altura do grupo e %f\n", menor_altura);
 	   	   	   	   printf("a) A maior altura do grupo e %f\n", maior_altura);
 	 	 	 
				return 0;
}