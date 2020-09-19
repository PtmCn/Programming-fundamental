#include <stdio.h>

int main ()
{
	int num,count;
	int range1=0,range2=0,range3=0,range4=0;
	printf ("How many students?\n");
	scanf ("%d",&num);
	float high[num], sumhigh, avg;
	
	count =0;
	while (count<num)
	{
		do{
		printf ("Enter number no.%d\n",count+1);
		scanf (" %f", &high[count]);
		}
		while (high[count]<0);
		if  (high[count]>=0 && high[count]<=160)
		range1++;
		else if  (high[count]>160 && high[count]<=170)
		range2++;
		else if  (high[count]>170 && high[count]<=180)
		range3++;
		else if (high[count]>180 )
		range4++;
		sumhigh = sumhigh+high[count];
		count++;
	}
	avg = sumhigh/num;
	printf ("0-160=%d\n",range1);
	printf ("160-170=%d\n",range2);
	printf ("170-180=%d\n",range3);
	printf ("180++=%d\n",range4);
	printf ("Average height is : %.2f",avg);
	
	return 0;
}
