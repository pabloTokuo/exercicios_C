#include<stdio.h> // printf(), scanf()
#include<stdlib.h> // system()
#include<locale.h> // local linguagem

main(){           // Inicio do programa
	setlocale(LC_ALL,"Portuguese"); // Para deixar a lingua em pt-br
	//int - %d, float - %f, char -%c, double -%lf
	// Declaração das variáveis
	double quantidade_dolar, cotacao, quantidade_reais; // tipo do Dado ex: int(numero inteiro) double(casas decimais)
	
	printf("Digite a quantidade dólares: \n US$ "); //printf para printar algo na tela
	scanf("%lf", &quantidade_dolar); // scanf scaneia o que vc esta escrevendo - "%lf" = Especificador de formato alterar equivalente ao tipo de dado usado
	
	printf("\n Digite a cotação: \nR$ ");
	scanf("%lf", &cotacao);
	
	quantidade_reais = quantidade_dolar * cotacao; // Equacao para saber a quantidade de dolar em reais
	
	printf("O valor em reais é R$ %.2lf", quantidade_reais); // .2 Quantidade de casas decimais que vc quer q apareça
	printf("\n\n"); // Para pular linha \n
	
	system("pause"); // Pausar o programa após executar o programa todo
	
}

/*
Regras para nomear variáveis:
- Pode ter número, mas não pode começar com número
	Exemplo:
	int idade1 (pode)
	int 1idade (não pode)
- Não pode ter espaço e nem caracteres especiais, exceto o "_" underline
- Não pode ser letra acentuadas e nem ç
- Não pode ser palavra reservada da linguagem. 
	Exemplo: 
	int printf (não pode)
 */
