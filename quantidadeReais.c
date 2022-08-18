#include<stdio.h> // printf(), scanf()
#include<stdlib.h> // system()
#include<locale.h> // local linguagem

main(){           // Inicio do programa
	setlocale(LC_ALL,"Portuguese"); // Para deixar a lingua em pt-br
	//int - %d, float - %f, char -%c, double -%lf
	// Declara��o das vari�veis
	double quantidade_dolar, cotacao, quantidade_reais; // tipo do Dado ex: int(numero inteiro) double(casas decimais)
	
	printf("Digite a quantidade d�lares: \n US$ "); //printf para printar algo na tela
	scanf("%lf", &quantidade_dolar); // scanf scaneia o que vc esta escrevendo - "%lf" = Especificador de formato alterar equivalente ao tipo de dado usado
	
	printf("\n Digite a cota��o: \nR$ ");
	scanf("%lf", &cotacao);
	
	quantidade_reais = quantidade_dolar * cotacao; // Equacao para saber a quantidade de dolar em reais
	
	printf("O valor em reais � R$ %.2lf", quantidade_reais); // .2 Quantidade de casas decimais que vc quer q apare�a
	printf("\n\n"); // Para pular linha \n
	
	system("pause"); // Pausar o programa ap�s executar o programa todo
	
}

/*
Regras para nomear vari�veis:
- Pode ter n�mero, mas n�o pode come�ar com n�mero
	Exemplo:
	int idade1 (pode)
	int 1idade (n�o pode)
- N�o pode ter espa�o e nem caracteres especiais, exceto o "_" underline
- N�o pode ser letra acentuadas e nem �
- N�o pode ser palavra reservada da linguagem. 
	Exemplo: 
	int printf (n�o pode)
 */
