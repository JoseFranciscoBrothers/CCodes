#include<stdio.h>
#include <math.h>
int main() {
	double m, v, Ec;
	printf("Ingresar la masa y la velocidad\n");
	scanf("%lf%lf",&m, &v);
	
	if((m>0)&&(v>=0)){
		Ec = (0.5)*m*pow(v, 2);
		printf("%lf Joules\n", Ec);
	}
	else{
		printf("El valor es incorrecto\n");		
	}
	return 0;
}
