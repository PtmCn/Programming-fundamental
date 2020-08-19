#include <stdio.h>
int main(){
	long long num;
	int  maxPrime, oddPrime;
	num = 600851475143;
	maxPrime = 0;
	oddPrime = 3;
	
	while (num%2==0){
		maxPrime = 2;
		num = num/2;
	}
	while (num!=1){
		while (num% oddPrime == 0){
			maxPrime = oddPrime;
			num = num/oddPrime;
		}
		oddPrime=oddPrime +2;
	}
	printf("%d",maxPrime);
}
