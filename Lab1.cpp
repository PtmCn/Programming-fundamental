#include <stdio.h>
int main()
{
	int x,f=2;
	printf ("Enter number:");
	scanf ("%d",&x);
	printf ("Factorizing result : ");
	while (x!=1 && x !=f)
	{
		 if (x%f == 0)
		{
			printf ("%d x ",f );
			x=x/f;
		}
		else
		f=f+1;
	}
	printf ("%d", x);
return 0;
}
