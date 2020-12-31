#include<stdio.h>

int main(){
	double x;
	printf("Da una calificacion\n");
	scanf("%lf", &x);
	if(x<0)printf("Calificacion incorrecta");			 
	else if(x<=5) printf("5");	
		else if(x<6.5) printf("6");
			else if(x<=7.5) printf("7");	
				else if(x<8.5) printf("8");	
					else if(x<=9.5) printf("9");							
						else if(x<=10) printf("10");	
							else printf("No existe");					
	getchar();
	getchar();
	return 0;
}
