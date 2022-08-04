//To find the factorial of a number

#include <stdio.h>

void main()
{
	int num,fact=1,i;
	printf("Enter any number:");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("%d",fact);
}
