#include <stdio.h>
int abs(int num);
int main()
{
	int a,b,n;
	scanf ("%d",&n);
	for (a=n-1;a>=-n+1;a--)
	{
		for (b=-(n-1);b<=(2*n)-1-n;b++)
		{
			if (a<=abs(b) && a>=-abs(b))
			{
			printf ("* ");
			}
			else
			{
			printf  ("  ");
			}
		}
		printf ("\n");
	}
    return 0;
}
int abs(int num)
{
	if (num>=0)
	num=num;
	else 
	num=-num;
return num;
}
