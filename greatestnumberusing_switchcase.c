#include <stdio.h>
int main()
{
	int a,b,c,d;

	printf("Enter first values\n");
	scanf("%d",&a);

	printf("Enter second values\n");
	scanf("%d",&b);

	printf("Enter third values\n");
	scanf("%d",&c);

	printf("Enter forth values\n");
	scanf("%d",&d);



	switch(a){

		case a>b && a>c && a>d:
		printf("%f is greatest number\n",a );
		break;

		case b>a && b>c && b>d:
		printf("%f is greatest number\n",b );
		break;

		case c>a && c>b && c>d:
		printf("%f is greatest number\n",c );
		break;

		case a>b && a>c && a>d:
		printf("%f is greatest number\n",d );
		break;


	}
	return 0;
}