#include<stdio.h>// Brothers Radilla Jose Francisco
int main() 
{
	char l;
	printf("Da una letra\n");
	scanf("%c", &l);
	switch(l)
	{
		case 'a':
		case 'A': 
			printf("Vocal A");
			break;
		case 'e': 
		case 'E': 
			printf("Vocal E");
			break;
		case 'I':
		case 'i': 
			printf("Vocal I");
			break;
		case 'O': 
		case 'o': 
			printf("Vocal O");
			break;
		case 'U':
		case 'u': 
		printf("Vocal U");
			break;
		default: printf("Es tro caracter ");
			break;	
	}
	getchar();
	getchar();
	return 0;
}
