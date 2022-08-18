#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int km, h, velocidadeMedia;
	
	printf("Digite a quantidade de KM: ");
	scanf("%d", &km);
	
	printf("Digite a quantidade de horas: ");
	scanf("%d", &h);
	
	velocidadeMedia = km / h;
	
	printf("A sua velocidade média é: %dkm/h", velocidadeMedia);
	printf("\n\n");
	
	system("pause");
}
