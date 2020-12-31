#include<stdio.h>// Brothers Radilla Jose Francisco
#include<stdlib.h>
#include<time.h>
int main() 
{
	int r;
	srand(time(NULL));
	r = rand()%10;
	if(r==6) printf("Ganas casa");	
	else printf("Sigue participando");
	getchar();
	getchar();
	return 0;
}
