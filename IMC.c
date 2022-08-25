#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double peso, altura, imc;
	
	printf("Digite seu peso: ");
	scanf("%lf", &peso);
	
	printf("Digite sua altura:");
	scanf("%lf", &altura);
	
	imc = peso / pow(altura, 2);
	
	printf("Seu IMC é %.2lf\n\n", imc);
	
	system("pause");
}
