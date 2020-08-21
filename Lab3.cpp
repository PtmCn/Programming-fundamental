#include <stdio.h>
int main()
{
	int num, column , row;
	printf ("Enter number :");
	scanf ("%d", &num);
	
	for (row=1;row<=num;row++)
	{
		for (column=1;column<=num;column++)
		{
			if (row==1||row==num||column==1||column==num)
			printf ("* ");
			else 
			printf("  ");
		}
		printf ("\n");
	}
return 0;
}
