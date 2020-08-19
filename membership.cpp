#include <stdio.h>
int main()
{
	float totalPrice,age,discount;
	char memStat,cash;
	scanf ("%f %c",&totalPrice,&memStat);
	if (memStat == 'Y')
	{
		scanf ("%f", &age);
		if (age>60)
		discount = 0.2;
		else
		discount = 0.1;
	}
	else if (memStat == 'N')
	{
		scanf (" %c", &cash);
		if (cash == 'Y')
		discount = 0.05;
		else if (cash == 'N')
		discount = 0.00;
	}
	discount*=totalPrice;
	totalPrice-=discount;
	printf ("price = %.2f Baht", totalPrice);
	return 0;
}
