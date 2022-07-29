#include<stdio.h>

int main()
{
	int firstvalue,secondvalue;
	
	

	
	
	printf("Enter the first value\n");
	scanf("%d", &firstvalue);
	
	printf("Enter the second value\n");
	scanf("%d", &secondvalue);
	
	char operation;
	
	printf("What you want to do '+,-,%,*,/'\n");
	scanf("%c", &operation);

	switch(operation)
	{
		case '+' :
		printf("The addition of %d+%d is:%d\n",firstvalue, secondvalue, &firstvalue+secondvalue);
		
	}


























	return 0;
}