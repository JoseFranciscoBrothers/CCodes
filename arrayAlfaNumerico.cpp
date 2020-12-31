#include<stdio.h>// Brothers Radilla Jose Francisco
#include<string.h>
int main() 
{	
	char nombre[60];
	long cantidadLetras;
	printf("Da nombre y apellidos\n");
	scanf("%[^\n]",nombre);
	printf("Tu nombre completo es: %s\nLa inicial de tu  nombre es: %c",nombre, nombre[0]);	
	getchar();
	getchar();
	return 0;
}
