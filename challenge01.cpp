#include <stdio.h>
main() {
	int x, y, n=0, a=0 ;
	printf("Enter first number : ");
	scanf("%d", &x);
	printf("Enter second number : ");
	scanf("%d", &y);
	for(;x<y;++x){
		a=a+x;
		n=n+1;
		printf("%d\t", x);
	}
	for(;x>y;--x){
		a=a+x;
		n=n+1;
		printf("%d", x);
	}
	printf("%d", y);
	printf("\nAverage : %d\n", (a+y)/(n+1));
}
