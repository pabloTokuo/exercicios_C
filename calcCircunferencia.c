#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double raio, area;
	
	printf("Digite o raio da circunfer�ncia: ");
	scanf("%lf", &raio);
	
	area = 3.14 * pow(raio, 2);
	
	printf("A area da circunferencia � %.2lf", area);
	printf("\n\n");
	
	system("pause");
}
