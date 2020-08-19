#include <stdio.h>
int main(){
	int firstNumber,secondNumber,sum=0,evenSum=0;
	while (sum<4000000){
		sum=firstNumber+secondNumber;
		firstNumber=secondNumber;
		secondNumber=sum;
		if (sum%2==0){
			evenSum=evenSum+sum;
		}
		
	}
	printf("%d", evenSum);
}
