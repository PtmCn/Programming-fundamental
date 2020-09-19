#include <stdio.h>

int strcnt(char *p);

int main ()
{
	char c[100];
	char* p1,*p2;
	int count,flag;
	printf ("Enter string:");
	scanf ("%s", c,99);
	count = strcnt(c);
	p1=p2=c;
	p2=p2+count-1;
	while (*p1 != '\0')
	{
		
		while (*p2 !='\0')
		{
			if (*p1==*p2)
			flag=1;
			else
			{
			flag=0;
			break;
			}
			p2=p2-1;
		}
		p1=p1+1;
	}
	if (flag==1)
		printf ("Palindrome");
	else if (flag == 0)
		printf ("Not Palindrome");
	return 0 ;
}
int strcnt(char *p)
{
    int count = 0;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    return count;
}

