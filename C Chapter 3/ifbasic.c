#include <stdio.h>

int main()
{
	int a,b;
	printf("Entre the number \n");
	scanf("%d", &a);


	if(a%2==0){
		printf("%d is even number\n", a);
			  }
	else{
		printf("%d is odd\n", a);
	}		  

	return 0;
}