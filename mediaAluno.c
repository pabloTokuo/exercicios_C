#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double nota1, nota2, media;
	
	printf("Digite nota 1: ");
	scanf("%lf", &nota1);
	
	printf("Digite nota 2: ");
	scanf("%lf", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("Sua média é %.2lf\n\n", media);
	
	system("pause");
}
