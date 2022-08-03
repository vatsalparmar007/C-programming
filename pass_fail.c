#include <stdio.h>

int main()
{
	float maths,physisc,chemistry;
	float total;

	printf("Entre your Maths marks\n");
	scanf("%f", &maths);

	printf("Entre your Physisc marks\n");
	scanf("%f", &physisc);

	printf("Entre your Chemistry marks\n");
	scanf("%f", &chemistry);

	total=(maths+chemistry+physisc)/3;

	if ((total<40) || maths<33 || physisc<33 || chemistry<33)
	{
		printf("Your total percentage is %f and you are failed\n", total);
	}
	else{
		printf("Your total percentage is %f and you are passed\n", total);
	}

	return 0;
}