#include <stdio.h>
int main ()
{
	int x,y;
	int product, revProd, reverse, max = 0;
	
	for (x=100;x<1000;x++)
	{
		for (y=100;y<1000;y++)
		{
			product = x*y;
			
			revProd = product;
			reverse = 0;
			
			while (revProd>0)
			{
				reverse = reverse*10+ revProd%10;
				revProd /=10;
			}
			if (reverse == product)
			{
				if (product> max)
				{
					max =product;
				}
			}
		}
	}
	printf ("%d", max);
return 0;
}
