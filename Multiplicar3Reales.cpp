#include<stdio.h>
int main() {
	double N1, N2, N3, N4;
	printf("Dar 3 numeros reales\n");
	scanf("%lf%lf%lf", &N1, &N2, &N3);	
	N4 = N1*N2*N3;
	printf("%lf", N4);
	return 0;
}
