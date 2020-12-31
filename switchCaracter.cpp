#include<stdio.h>

int main(){
	char h;
	printf("Da un caracter\n");
	scanf("%s", &h);
	
	switch(h)
	{
		case '@': printf("arroba");
			break;
		case ';': printf("punto y coma");
			break;
		case '+': printf("mas");
			break;
		default: printf("Es tro caracter distinto de @, ; y +");
			break;	
	}
	
						
	getchar();
	getchar();
	return 0;
}
