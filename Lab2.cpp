#include <stdio.h>
int main()
{
	int n1,n2,f,GCD;
	printf ("Enter first number :");
	scanf ("%d", &n1);
	printf ("Enter second number :");
	scanf ("%d", &n2);
 	for(f=1;f<=n1 && f<=n2;++f)
    {
        if(n1%f==0 && n2%f==0)
            GCD = f;
    }
	printf ("Greatest Common Divisor = %d", GCD);
return 0;	
}
