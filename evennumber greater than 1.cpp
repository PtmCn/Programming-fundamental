#include <stdio.h>
int main()
{
	int n,m ;
	
	do
	{
	printf ("Enter number greater than 1:");
	scanf ("%d", &n );
	}while (n<=1);
	
	for (m=1;m<=n;m++)
	{
		if (m%2== 0)
		printf ("%d", m);
		else
		printf (" ");
	}
}
