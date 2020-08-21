#include <stdio.h>
int main()
{
	long x,f=2;
	printf ("Enter number:");
	scanf ("%ln",&x);
	printf ("Factorizing result : ");
	while (x!=1 && x !=f)
	{
		 if (x%f == 0)
		{
			printf ("%ln x ",f );
			x=x/f;
		}
		else
		f=f+1;
	}
	printf ("%ln", x);
return 0;
}
