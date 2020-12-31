#include<stdio.h>// Brothers Radilla Jose Francisco
#include<math.h>
int main() 
{
	double x;
	do{
		printf("Da un valor positivo\n");
		scanf("%lf",&x);
	}
	while(x<0);
	x=pow(x,0.5);
	printf("La raiz es: %lf",x);	
	getchar();
	getchar();
	return 0;
}
