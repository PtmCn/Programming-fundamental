#include <stdio.h>

int main()
{
    int firstnum=1,secondnum=1,sum=0,n,i,j;
    printf ("Enter the number of lines:");
    scanf ("%d", &n);
    printf ("Output:\n");
    
    for ( j = 1;j<=n;j++)
    {
        for ( i = 1;i<=j;i++)
        {
            printf ("%d\t",firstnum);
            sum = firstnum+secondnum;
            firstnum = secondnum;
            secondnum = sum;
            if(i == j){printf ("\n");}
        }
    }
    return 0;
}
