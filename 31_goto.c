/*
To ask two numbers and if one of the number is negative goto
negative label otherwise display Both numbers are positive
*/

#include <stdio.h>
void main()
{
	int num1, num2;
	printf("Enter first no:");
	scanf("%d", &num1);
	if(num1<0)
	{
		goto negative;
	}
	printf("\nEnter second number:");
	scanf("%d", &num2);
	if(num2<0)
	{
		goto negative;
	}
	printf("\nBoth numbers are positive");

	return;

	negative: printf("\nEither number is negative");
}
