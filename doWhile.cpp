#include<stdio.h>// Brothers Radilla Jose Francisco
#include<math.h>
int main() 
{	
	char L;
	double a;
	do{
		printf("Da un valor\n");
		scanf("%lf",&a);
		a += 2;
		printf("%lf\n",a);	
		printf("Para repetir da una s\n");
		scanf("%s",&L);
	}
	while(L=='s');	
	getchar();
	getchar();
	return 0;
}


