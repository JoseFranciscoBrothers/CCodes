#include<stdio.h>// Brothers Radilla Jose Francisco
int main() 
{	
	int H[3][2];
	H[0][0]=1,H[0][1]=4;
	H[1][0]=2,H[1][1]=5;
	H[2][0]=3,H[2][1]=6;
	for(int i =0;i<=2;i++){
		for(int j =0;j<=1;j++)
			printf("%d",H[i][j]);
		printf("\n");
	}
	getchar();
	getchar();
	return 0;
}
