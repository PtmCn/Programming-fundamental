#include <stdio.h>
int main()
{
	int x,f;
	f=2;
	scanf ("Enter number : %d",&x);
	printf ("Factorizing result : ");
	while (x!=1)
	{
		if (x%f==0)
		{
			while (x%f==0)
			{
			printf("%d",f);
			x=x/f;
			}
		}
		else
		{
			f+=1;
		}
	}
	return 0;
}
