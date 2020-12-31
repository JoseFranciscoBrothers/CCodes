#include<stdio.h>// Brothers Radilla Jose Francisco
double square(double x)
{
	return x*x;
}


double cube(double x)
{
	return x*x*x;
}

double abs(double x){
	if(x<0){
		return -x;
	}
	else{
		return x;
	}
}


double operation(double y, double x)
{
	return ((x/square(y))+2*y)/3;
}


double improve(double guess, double x)
{
	return operation(guess, x);
}


double goodEnough(double guess, double x)
{
	return (abs(cube(guess) - x) < 0.0001);
}


double cubertIter(double guess, double x)
{
	if(goodEnough(guess, x))
 	{
 	return guess;
 	}
	else{
		cubertIter((improve(guess, x)), x);
		}
 
}


double cubert(double x)
{
 return cubertIter(1.0, x);
}



int main() 
{
	double x;
	scanf("%lf", &x);

	printf("\n%lf \n", cubert(x));

	getchar();
	getchar();
	
	return 0;
}
