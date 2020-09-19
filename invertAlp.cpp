#include<stdio.h>
int main()
{
	char c[50];
	char* p;
	p = c;
	scanf("%s", c);
	while (*p!='\0')
	{
		if (*p>='a'&&*p<='z')
			printf("%c", *p-'a'+'A');
		else if (*p>='A'&&*p<='z')
			printf ("%c", *p-'A'+'a');
		p++;
	}
	return 0;
}
