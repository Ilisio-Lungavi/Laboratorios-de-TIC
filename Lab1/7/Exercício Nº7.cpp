//Exercício Nº7
#include<stdio.h>
int main(){
	
	float PF, PL, PI; 
	float PFI, VL, VI;
	
		printf("Digite o valor do carro novo...: ");
		scanf("%f", PF);
		printf("Digite o valor percentual de lucro do distribuidor:");
		scanf("%f", PL);
		printf("Digite o valor percentual de imposto:");
		scanf("%f%",PI);
		
		
		VL = (PF *  PL) / 100.0 ;
		VI = (PF *  PI) / 100.0 ;
		PFI = PF + VL + VI;
		
		printf("a) O valor correspondente ao lucro de distribuidor e %f", VL);
		printf("b) O valor correspondente aos impostos e %f", VI);
		printf("C) O preco final do veiculo e %f", PFI);
		
	return 0;
}