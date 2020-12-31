#include<stdio.h>
int main() {
	double A, B, C;
	printf("Dar 2 numeros reales\n");
	scanf("%lf%lf",&A,&B);	
	if(B!=0){
		C = A%B;
		printf("%lf", C);
	}
	else{
		printf("El valor de B es incorrecto");	
	}
	
	return 0;
}
