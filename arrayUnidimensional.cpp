#include<stdio.h>// Brothers Radilla Jose Francisco
int main() 
{
	long B[15];
	for(int i=0;i<=14;i++){
		printf("Da un valor ");
		scanf("%ld",&B[i]);	
	}
	for(int i=14;i>=0;i--) 
		printf("%ld\n",B[i]);	
	getchar();
	getchar();
	return 0;
}
