#include<stdio.h>// Brothers Radilla Jose Francisco
int main() 
{
	char l;
	printf("Da una letra\n");
	scanf("%c", &l);
	switch(l)
	{
		case 'a': printf("Vocal A");
			break;
		case 'A': printf("Vocal A");
			break;
		case 'e': printf("Vocal E");
			break;
		case 'E': printf("Vocal E");
			break;
		case 'I': printf("Vocal I");
			break;
		case 'i': printf("Vocal I");
			break;
		case 'O': printf("Vocal O");
			break;
		case 'o': printf("Vocal O");
			break;
		case 'U': printf("Vocal U");
			break;
		case 'u': printf("Vocal U");
			break;
		default: printf("Es tro caracter ");
			break;	
	}
	getchar();
	getchar();
	return 0;
}
