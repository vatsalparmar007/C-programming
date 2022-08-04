#include<stdio.h>

int main()
{
	int year1,year2;
	printf("From which year you want\n");
	scanf("%d",&year1);

	printf("To which year you want\n");
	scanf("%d",&year2);

	for (; year1>year2; year1=year1+1)
	{
		printf("the leap year is \n",year1,year2);
	}
	
	if (year1,year2%4==0 && year1,year2%400==0 != year1,year2%100  )
	{
		printf("%d is leap year\n",year1,year2);
	}
	else{
		printf("%d is not a leap year\n",year1,year2);
	}
	return 0;
}
