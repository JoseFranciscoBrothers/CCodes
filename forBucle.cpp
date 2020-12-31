#include<stdio.h>// Brothers Radilla Jose Francisco
int main() 
{
	int i;
	double N;
	for(i=0; i<10; i++){
		printf("Da un valor\n");
		scanf("%lf", &N);
	}
	for(i=9; i>=0; i--) 
		printf("%.2lf\n",N);	
	
	getchar();
	getchar();
	return 0;
}
