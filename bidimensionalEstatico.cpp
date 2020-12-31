#include<stdio.h>// Brothers Radilla Jose Francisco
int main() {	
	char X[][3]={{'a','b',0},{'c','d',0}};
	for(int i=0;i<2;i++){
		for(int j =0;j<2;j++){
			printf("%c",X[i][j]);
		}
		printf("\n");
	}

	getchar();
	getchar();
	return 0;
}
