#include<stdio.h>// Brothers Radilla Jose Francisco
double sqrt(double x);
int primeOrNot(int x);
int smallSqrt(int x);
int main() 
{
	int x;
	scanf("%d", &x);
	printf("%d", primeOrNot(x));	
	
	getchar();
	getchar();
	return 0;
}


int primeOrNot(int x)	
{
	int k = 0;
	int i = 1;
	
	if(x == 1)
	{
		return 0;
	}
	else
	{
		while(i<=smallSqrt(x))
		{
			if(x % i == 0)
			{
				k++;
			}
		i++;
		}
		if(k!= 1)
		{
			return 0;//no primo
		}
		else
		{
			return 1;//primo
		}
	}
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
	return (abs(square(guess) - x) < 0.0000001);
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
int smallSqrt(int x){
	return ((int)sqrt((double)x));
}
