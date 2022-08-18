#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	int hora, minuto, segundo, total_segundos;
	
	printf("Digite a quantidade de horas: ");
	scanf("%d", &hora);
	
	printf("Digite a quantidade de minutos: ");
	scanf("%d", &minuto);
	
	printf("Digite a quantidade de segundos: ");
	scanf("%d", &segundo);
	
	total_segundos = hora * 3600 + minuto * 60 + segundo;
	
	printf("O total de segundos é: %d", total_segundos);
	printf("\n\n");
	
	system("pause");
}
