#include <stdio.h>
int main()
{
	float totalPrice,age,discount;
	char memStat,cash;
	
	printf ("Enter the price :");
	scanf (" %f",&totalPrice);
	printf ("Membership?(Y/N)");
	scanf (" %c",&memStat);
	if (memStat == 'Y')
	{
		printf ("Age :");
		scanf (" %f", &age);
		if (age>60)
		discount = 0.2;
		else
		discount = 0.1;
	}
	else if (memStat == 'N')
	{
		printf ("Cash?(Y/N)");
		scanf (" %c", &cash);
		if (cash == 'Y')
		discount = 0.05;
		else if (cash == 'N')
		discount = 0.00;
		else
		printf ("ERROR");
	}
	discount*=totalPrice;
	totalPrice-=discount;
	printf ("price = %.2f Baht", totalPrice);
	return 0;
}
