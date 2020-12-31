#include<stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846
int main() {
	double r, A;
	printf("Cual es el valor del radio ?\n");
	scanf("%lf",&r);
	if(r>0){
		A = M_PI*pow(r, 2);
		printf("%lf", A);
	}
	else{
		printf("El valor del radio es incorrecto\n");		
	}
	return 0;
}
