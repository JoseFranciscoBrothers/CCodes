#include<stdio.h>
int main() {
	long C1, C2, C3;
	printf("Da el numerador y el denominador\n");
	scanf("%ld%ld", &C1, &C2);
	if(C2 != 0){
		C3 = C1 % C2;
		printf("El modulo es: %ld", C3);	
	}
	else{
		printf("Denominador nulo");	
	}
	getchar();
	getchar();
	return 0;
}
