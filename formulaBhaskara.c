#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main(){
	double a, b, c, delta, x1, x2;
	
	printf("Qual valor de A: ");
	scanf("%lf", &a);
	
	printf("Qual valor de B: ");
	scanf("%lf", &b);
	
	printf("Qual valor de C: ");
	scanf("%lf", &c);
	
	delta = (b * b) - (4 * a * c);
	x1 = ( ( - b + sqrt(delta) ) / 2 * a);
	x2 = ( (- b - sqrt(delta) ) / 2 * a);
	
	printf("valor delta : %.2lf", delta);
	printf("\n\n");
	printf("valor de x1 : %.2lf", x1);
	printf("\n\n");
	printf("valor de x2 : %.2lf", x2);
	printf("\n\n");
	
	system("pause");
}
