#include <stdio.h>
int sumFac (int a,int b);//function declaration

int main ()
{
	//local variable definition
	int a = 1;
	int b = 10000;
	int num;
	
	// for a from 1-b
	for (a;a<=b;a++)
	{
		//calling a function to get sum
		num= sumFac(a,b);
		if (a==num && a%num==0)
		printf("%d\t", num);
	}
	return 0;
}
//function returning sum of factors from a to b-1
int sumFac(int a, int b)
{
	int fac;
	int sum=1;
	for (fac=2;fac<a;fac++)
	{
		if (a%fac==0)
		sum+=fac;
	}
	return sum;
}
