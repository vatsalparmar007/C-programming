#include <stdio.h>
int main()
{
	float num1,num2,num3,num4;

	printf("Enter first values\n");
	scanf("%f",&num1);

	printf("Enter second values\n");
	scanf("%f",&num2);

	printf("Enter third values\n");
	scanf("%f",&num3);

	printf("Enter fourth values\n");
	scanf("%f",&num4);



	if ( num1>num2 && num1>num3 && num1>num4)
	{
		printf("%f is largest number\n", num1);//for num1
	}

	else if ( num2>num1 && num2>num3 && num2>num4)
	{
		printf("%f is largest number\n", num2);//for num2
	}

	else if ( num3>num1 && num3>num2 && num3>num4)
	{
		printf("%f is largest number\n", num3);//for num3
	}


	else if ( num4>num1 && num4>num2 && num4>num3)
	{
		printf("%f is largest number\n", num4);//for num4
	}

	else
	{
		printf("All number are same\n");//for all equal case
	}

	return 0;
}