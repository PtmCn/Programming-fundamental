#include<stdio.h>
int main()
{    
	int num,sum = 2;
	printf ("Enter number:");
	scanf ("%d", &num);
	for (int n=1;n<num;n++)
	{
		sum*=2;
	}
	
	int  dgsum = 0, rem ; 
	while (sum/10 != 0)
	{
		while (sum!=0)
		{
			rem= sum%10;
			dgsum += rem;
			sum=sum/10;
		}
		printf ("%d", dgsum);
	}
    return 0;
}
//week5 did not submit
