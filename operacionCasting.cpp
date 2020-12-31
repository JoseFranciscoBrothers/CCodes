#include<stdio.h>// Brothers Radilla Jose Francisco
int main() 
{
	long n;
	double T;
	scanf("%ld", &n);
	if (n>0) 
	{
		T= (double(n)/4)+40;
		printf("%lf", T);
	}
	else {
		printf("Valor incorrecto");
	}
	getchar();
	return 0;
}
