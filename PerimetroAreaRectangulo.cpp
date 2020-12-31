#include<stdio.h>
#include<math.h>
int main() {
	double b,h, P, A;
	printf("Dar la base y la altura\n");
	scanf("%lf%lf", &b, &h);
	if((h>0)&&(b>0)){
		P = (b*2)+(h*2);
		A = b*h;
		printf("Perimetro %lf y Area %lf", P, A);
	}
	else{
		printf("El valor de la base o la altura no puede ser negativo o nulo\n");		
	}
		
	return 0;
}
