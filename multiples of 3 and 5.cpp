#include<stdio.h>
int main (){
	int sum=0;
	for(int x=0;x<1000;x++)
	{
		if (x%3 == 0)
		{
			sum=sum+x;	
		}
		else if (x%5 == 0)
		{
			sum=sum+x;
		}
	}
	printf("The sum is : %d", sum);
}
