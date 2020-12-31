#include<stdio.h>// Brothers Radilla Jose Francisco
int main() {	
	double A[3][2],B[3][2],C[3][2];
	for(int i =0;i<=1;i++){
		for(int j =0;j<=2;j++){
			printf("Da un numero ");
			scanf("%lf",&A[i][j]);
		}
	}
	for(int i =0;i<=1;i++){
		for(int j =0;j<=2;j++){
			printf("Da un numero real ");
			scanf("%lf",&B[i][j]);
		}
	}
	for(int i =0;i<=1;i++){
		for(int j =0;j<=2;j++){	
			C[i][j] = A[i][j] + B[i][j];
			printf("%lf ",C[i][j]);
		}
		printf("\n");
	}
	getchar();
	getchar();
	return 0;
}
