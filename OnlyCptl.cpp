#include <stdio.h>
int main()
{
	int n;
	char str[20] = "abCDEfGHiJk";
	for (n=0;n<=20;n++)
	{
		if (str[n]>=65 && str[n]<=90)
		{	
			printf ("%c", str[n]);
		}
	}	
return 0;
}
