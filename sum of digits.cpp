#include<stdio.h>
int main()
{    
    int num, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf ("%d", num);
    
    while(num / 10 != 0)
    {
        sum = 0;
        while(num != 0) 
        {
            rem = num % 10;
            sum += rem;
            num = num / 10;
        }
		printf (" -> %d", sum);
        num = sum;
    }
    return 0;
}
