#include<stdio.h>

int main()
{
	int firstvalue,secondvalue;
	char operation;
	

	printf("What you want to do '+,-,*,/,%'\n");
	scanf("%c", &operation);

	printf("Enter the first value\n");
	scanf("%d", &firstvalue);
	
	printf("Enter the second value\n");
	scanf("%d", &secondvalue);

	switch(operation)
	{
		case '+' :
		printf("The addition of %d+%d = %d\n",firstvalue,secondvalue, firstvalue + secondvalue);
		break;

		case '-' :
		printf("The subtraction of %d-%d = %d\n",firstvalue,secondvalue, firstvalue - secondvalue);
		break;

		case '*' :
		printf("The multiplication of %dx%d = %d\n",firstvalue,secondvalue, firstvalue * secondvalue);
		break;

		case '/' :
		printf("The division of %d/%d = %d\n",firstvalue,secondvalue, firstvalue / secondvalue);
		break;

		case '%' :
		printf("The division remainder of %d/%d is %d\n",firstvalue,secondvalue, firstvalue % secondvalue);
		break;

		default:
		printf("No operation is from the option\n");

	}

	return 0;
}