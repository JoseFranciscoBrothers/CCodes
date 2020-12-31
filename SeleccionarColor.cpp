#include<stdio.h>
#include<math.h>
int main() {
	int c;
	printf("Selecciona un numero\n");
	scanf("%d", &c);
	
	switch(c){
			
	case 1:
		printf("rojo");
		break;
		
	case 2:
		printf("verde");
		break;
		
	case 3:
		printf("azul");
		break;
		
	case 4:
		printf("rosa");
		break;
		
	case 5:
		printf("amarillo");
		break;
		
	default:
		printf("numero incorrecto\n");
		break;
	}
			
	return 0;
}
