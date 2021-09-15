//Exercício Nº20
#include<stdio.h>
	int main(){
		
		int anos;
		float altura_chico=1.50, altura_juca=1.10;
		
		while(altura_chico > altura_juca){
			altura_chico += 0,02;
			altura_juca += 0,03;
			anos++;
		}
			printf("Serão necessários  %i anos para que Juca seja maior que Chico...:", anos);
 
				return 0;
}