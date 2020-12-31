#include <stdio.h>
int floor(double x);
int main() 
{
	double x;
	scanf("%lf", &x);
	printf("%d", floor(x));	
	
	getchar();
	getchar();
	return 0;
}


int floor(double x){
	return (int)x;
}

