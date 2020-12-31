#include<stdio.h>
/*Este programa calcula una suma y para ello
Es necesario introducir dos numeros
que finalmente daran un resultado*/
int main() {
	double N1, N2, N3;
	printf("Dar 2 numeros reales\n");
	scanf("%lf%lf",&N1,&N2);	
	N3 = N1 + N2;
	printf("%lf", N3);
	return 0;
}
