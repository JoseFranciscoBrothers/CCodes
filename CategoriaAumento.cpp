#include<stdio.h>
#include<math.h>
int main() {
	char cat;
	double sueldo, aumento;
	printf("Selecciona la categoria\n");
	scanf("%c", &cat);
	printf("Ingresa el sueldo\n");
	scanf("%lf", &sueldo);
	
	switch(cat){
			
	case 'A':
		aumento = (sueldo*15)/100;
		printf("%lf\n",aumento);
		break;
		
	case 'B':
		aumento = (sueldo*10)/100;
		printf("%lf\n", aumento);
		break;
		
	case 'C':
		aumento = (sueldo*8)/100;
		printf("%lf\n", aumento);
		break;
		
	case 'D':
		aumento = (sueldo*7)/100;
		printf("%lf\n", aumento);
		break;
		
	default:
		printf("categoria no disponible o salario no valido\n");
		break;
	}
			
	return 0;
}
