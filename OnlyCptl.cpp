#include <stdio.h>
#include <string.h>
int main()
{
	int n,b;
	char str[1000];
	scanf ("%[^\n]s", str);
	b=strlen(str);
	for (n=0;n<=b;n++)
	{
		if (str[n]>=65 && str[n]<=90)
		{	
			printf ("%c", str[n]);
		}
	}	
return 0;
}
