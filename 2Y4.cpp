#include<stdio.h>

int main(){
	long n;
	printf("Da un numero entero\n");
	scanf("%ld", &n);
	if((n==2)||(n==4)) printf("%ld es par", n);
	
	else printf("%ld no es 2 ni 4", n);
	
	getchar();
	getchar();
	return 0xF9;
}
