#include<stdio.h> 

int main() { 
    int x;
printf("Enter number:");
scanf("%d", &x);
if (x%2==0)
printf("even");
else if (x%2!=0)
printf("odd");
else 
printf("Error");

    return 0;
}
