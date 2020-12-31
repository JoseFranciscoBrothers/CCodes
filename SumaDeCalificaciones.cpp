#include<stdio.h>
int main() {
	int cant, contar;
	double suma, calif, prom;
	printf("Indica cuantas calificaciones quieres promediar\n");
	scanf("%d",&cant);
	if (cant >= 0){
		if (cant == 0) {
			printf("No hay calificaciones para promediar y el promedio es 0\n");
		}
		else {
			contar = 1;
			suma = 0;
			while (contar <= cant) {
				printf("Dar una calificacion\n");
				scanf("%lf", &calif);
				if ((calif>=0)&&(calif<=10)) {
					suma = suma + calif;
					contar += 1;
				}
				else{
					printf("No puede haber un numero de calificaciones negativo\n");
				}
			}
		prom =(suma/cant); 	
		printf("%lf", prom);
		}
	}
	else{
		printf("No puede haber un numero de calificaciones negativo\n");		
	}
	getchar();
	getchar();	
	return 0;
}
