#include <stdio.h>

int main() 
{
    
int a;
printf("Enter the value of start\n");
scanf("%d", &a);

int b;
printf("Enter the value of End\n");
scanf("%d", &b);

int c;
printf("For which table you want\n");
scanf("%d", &c);

for( ; a<=b ; a=a+1 )
{
    printf("%dx%d=%d \n",c,a,a*c);
}

  return 0;
}