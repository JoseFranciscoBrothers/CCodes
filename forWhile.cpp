#include<stdio.h>// Brothers Radilla Jose Francisco
#include<ctype.h>
int main() 
{	
	char i;
	long h;
	i=5;
	while(i>=0){
		printf("Da un numero\n");
		scanf("%ld",&h);
		printf("%ld\n",h);
		i--;
	}
	
	getchar();
	getchar();
	return 0;
}

