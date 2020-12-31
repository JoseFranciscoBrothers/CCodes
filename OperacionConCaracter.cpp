#include<stdio.h>
#include<math.h>
int main() {
	char o;
	double A, B, C, G;
	int E, F, D;
	printf("Selecciona la operacion\n");
	scanf("%c", &o);
		
	switch(o){
			
	case '+':
		printf("Dar dos numeros reales\n");
		scanf("%lf%lf", &B, &C);
		A = B+C;
		printf("%lf\n",A);
		break;
		
	case '-':
		printf("Dar dos numeros reales\n");
		scanf("%lf%lf", &B, &C);
		A = B-C;
		printf("%lf\n",A);
		break;
		
	case '*':
		printf("Dar dos numeros reales\n");
		scanf("%lf%lf", &B, &C);
		A = B*C;
		printf("%lf\n",A);
		break;
		
	case '%':
		printf("Dar dos numeros enteros\n");
		scanf("%d%d", &E, &F);
		
		if(F!=0){
			D = E%F;
			printf("%d\n",D);	
		}
		else{
		printf("No se puede realizar operacion\n");	
		}
		break;
		
	case '/':
		printf("Dar tres numeros reales\n");
		scanf("%lf%lf%lf", &B, &C, &G);
		if(G!=0){
			A = B*(C/G);
			printf("%lf\n",A);	
		}
		else{
		printf("No se puede realizar operacion\n");	
		}
		break;		
		
	default:
		printf("Ningun caracter es correcto debido a que no tiene una operación asociada\n");
		break;
	}
			
	return 0;
}
