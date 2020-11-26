#include <stdio.h>

#define maxnum 10000

int main()
{
	int i, j; //loop indexes
	int tempSum1, tempSum2;
	int answer = 0;
	int numArray[5] = {0};
	int arrCnt = 0;
	int skip; //skip number y/n
	
	for (i = 2; i < maxnum; i++){
		tempSum1 = tempSum2 = 0;
		skip = 0;
		
		//Get all divisors under current number, and add them all up 
		for(j = 1;j < i; j++)
			if (i % j == 0)
				tempSum1 += j;
				
		//Get all divisors under that sum, and add all of these up 
		if (tempSum1 != i){
			for  (j = 1; j < tempSum1; j++)
				if (tempSum1 % j == 0)
					tempSum2 += j;
			
			//If 2nd dum of divisors = original number (i), then we have amicable numbers
			//Add both numbe and tempSum1 to answer
			if (tempSum2 == i){
				for (j = 0; j < arrCnt; j++)
					if (i  == numArray[j] || tempSum1 == numArray[j])
						skip = 1; 
			
				if  (skip == 0){
					answer += (i + tempSum1);
					numArray[arrCnt++] = tempSum1;
					printf ("i: %d sum: %d answer: %d\n", i , tempSum1, answer);	
				}
			}
		}
	}
	// Final answer
	printf ("\nFinal answer : %d\n",answer);
}
