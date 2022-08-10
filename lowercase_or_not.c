#include <stdio.h>

int main()
{
	char ch;
	printf("Entre the character\n");
	scanf("%c", &ch);

	if (ch<=122 && ch>=97)
	{
		printf("%c is lowercase character\n", ch);
	}
	else
	{
		printf("%c is not lowercase character\n", ch);
	}






	return 0;
}