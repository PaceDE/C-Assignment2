//To find the given number is a multiple of 7

#include <stdio.h>
void main()
{

	int num;
	printf("Enter your number:");
	scanf("%d",&num);
	if(num%7==0)
	{
		printf("%d is a multiple of 7.",num);
	}
	else
	{
		printf("%d is not a multiple of 7.",num);
	}
}
