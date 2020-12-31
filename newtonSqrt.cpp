#include<stdio.h>// Brothers Radilla Jose Francisco
double sqrt(double x);

int main() 
{
	double x;
	scanf("%lf", &x);

	printf("\n%lf \n", sqrt(x));

	getchar();
	getchar();
	return 0;
}


double square(double x)
{
	return x*x;
}


double abs(double x){
	if(x<0){
		return -x;
	}
	else{
		return x;
	}
}


double average(double x, double y)
{
	return (x+y)/2;
}


double improve(double guess, double x)
{
	return average(guess, x/guess);
}


double goodEnough(double guess, double x)
{
	return (abs(square(guess) - x) < 0.001);
}


double sqrtIter(double guess, double x)
	{
	if(goodEnough(guess, x))
 	{
 	return guess;
 	}
	else{
		sqrtIter((improve(guess, x)), x);
		}
 
	}
	
double sqrt(double x)
{

	return sqrtIter(1.0, x); 
 
}


