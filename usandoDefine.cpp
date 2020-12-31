#include<stdio.h>
#define cadena "Da un numero"
#define pi 3.141592
#define h 60
int main() 
{
	int g;
	float z;
	printf(cadena);
	scanf("%d",&g);
	g=g+h;
	printf("%d",g);
	z=pi;
	printf(" %f",z);
	getchar();
	getchar();
	return 0;
}

