#include<stdio.h>// Brothers Radilla Jose Francisco

int pow(int arg, int exp){
	int i;
	int res = 1;
	for(i=0; i<exp; i++){
		res *= arg;
	}
	return res;
}
int main() {	
	int res = pow(5,2);
	printf("%d",res);

	getchar();
	getchar();
	return 0;
}
