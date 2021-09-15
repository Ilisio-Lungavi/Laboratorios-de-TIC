//Exercício Nº10
#include <stdio.h>
	int main(){
		
		float sal_min, KW, pre_KW, pre_pago,valo_pago;
		
		printf("Digite o salario minimo:");
		scanf("%f", &sal_min);
		
		printf("Digite a quantidade de quilowatts consumida por uma residência:");
		scanf("%f", KW);
		
		pre_KW = sal_min / 5.0;
		pre_pago = pre_KW * KW;
		valo_pago = pre_pago - ( pre_pago * ( 15 / 100.0 ));
	
	return 0;
}