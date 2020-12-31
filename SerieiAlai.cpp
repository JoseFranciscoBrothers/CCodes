#include<stdio.h>
#include<math.h>
int main() {
	int N, i, suma;
	printf("Dar un numero entero\n");
	scanf("%d", &N);
	if(N>0){
		i = 1;
		suma = 0;
		while(i<=N){
			suma = suma + pow(i,i);
			i = i+1;
		}
		printf("%d",suma);	
	}
	else{
		printf("“El valor ingresado debe ser mayor que 0");
	}
	
	return 0;
}
