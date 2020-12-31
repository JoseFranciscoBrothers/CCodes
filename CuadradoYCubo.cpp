#include<stdio.h>
#include<math.h>
int main() {
	double X, cuadrado, cubo;
	printf("Dar un numero real\n");
	scanf("%lf", &X);
	cuadrado = pow(X,2);
	cubo = pow(X,3);
	printf("El cuadrado es %lf y El cubo es %lf\n", cuadrado, cubo);
	
	return 0;
}
