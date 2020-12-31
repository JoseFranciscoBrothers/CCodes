#include<stdio.h>
#include<math.h>
int main() {
	double valor1, valor2;
	printf("Dar un valor\n");
	scanf("%lf",&valor1);	
	valor2 = sin(valor1);
	printf("El seno de: %lf es: %lf", valor1, valor2);
	return 0;
}
