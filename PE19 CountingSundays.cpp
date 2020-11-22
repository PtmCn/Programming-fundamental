#include <stdio.h>

int main(){
	int monthDays[12]={
	31,29,31,30,31,30,31,31,30,31,30,31
	};
	int sunCount = 0;
	int month;
	int year;
	int dayOfWeek = 1;
	
	for (month =1;month<=12;month++){
		dayOfWeek += (monthDays[month-1] % 7);
		if (dayOfWeek > 7){
			dayOfWeek = (0 + dayOfWeek % 7);
		}	
	}
	
	for (year = 1901;year <=2000;year++){
		if (((year % 100 == 0) && (year % 400 == 0))||(year % 4 == 0)){
			monthDays[1] = 29;
		}
		else{
			monthDays[1] = 28;
		}
		
		for (month = 1; month <= 12;month++){
			dayOfWeek += (monthDays[month-1] % 7);
			if(dayOfWeek > 7){
				dayOfWeek = (0 + dayOfWeek % 7);
			}
			else if (dayOfWeek == 7){
				sunCount++;
			}
		}
	}
	printf("sunCount:%d\n\n",sunCount);
}
