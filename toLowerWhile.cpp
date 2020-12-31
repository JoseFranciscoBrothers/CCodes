#include<stdio.h>// Brothers Radilla Jose Francisco
#include<ctype.h>
int main() 
{	
	char L;
	double a;
	printf("Para hacer da una s\n");
	scanf("%s",&L);
	L = tolower(L);
	while(L=='s'){
		printf("Da un valor\n");
		scanf("%lf",&a);
		a += 2;
		printf("%lf\n",a);	
		printf("Para repetir da una s\n");
		scanf("%s",&L);
		L = tolower(L);
	}	
	getchar();
	getchar();
	return 0;
}

