#include<stdio.h>// Brothers Radilla Jose Francisco
int main() 
{
	int a[3][2];
	a[0][0]=2,a[1][0]=2,a[2][0]=3;
	a[0][1]=1,a[1][1]=2,a[2][1]=1;
	
	for(int j=0;j<2;j++){
		for(int i=0;i<3;i++){
			printf("%d",a[i][j]);
		}
		printf("\n");	
	}
	getchar();
	getchar();
	return 0;
}
