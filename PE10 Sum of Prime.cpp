#include <stdio.h>

int main ()
{
	int n , i = 0 , j = 0 , sum = 0 ;
	scanf ("%d", &n);
	int primes[n];
	
	for (i=0;i<=n;i++)
	{
		primes[i]=1;
	}
	for (i=2;i<=n/2;i++)
	{
		if (primes[i]==1)
		{
			for (j=i;j*i<=n;j++)
			{
			primes[i*j]=0;
			}
		}
	}
	for (i=2;i<=n;i++)
	{
		if (primes[i]==1)
		{
			sum+=i;
		}
	}
	printf ("%d", sum);
return 0;
}
