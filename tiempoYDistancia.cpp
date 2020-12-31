#include<stdio.h>
int main() {
	double d, v, t;
	char R;
	R = 's';
	while(R = 's'){
		printf("Ingresa el valor de la distancia y la velocidad con un guion bajo entre los valores");
		scanf("%lf_%lf",&d,&v);
		if(v!=0){
			t = d/v;
			printf("El tiempo de conduccion es de %lf", t);
		}
		else{
			printf("ERROR");
		}
	}
	getchar();
	getchar();
	return 0;
}
