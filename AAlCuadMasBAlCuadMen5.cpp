#include<stdio.h>
#include <math.h>
int main() {
	double a, b, c;
	printf("Dar 2 numeros reales\n");
	scanf("%lf%lf", &a, &b);	
	c = pow(a,2)+pow(b,2)-5;
	printf("%lf", c);
	return 0;
}
