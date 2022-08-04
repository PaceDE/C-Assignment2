//To find the first input number is divisible by second number

#include <stdio.h>
void main()
{
	int a, b;
	printf("Enter your first number:");
	scanf("%d",&a);
	printf("Enter your second number:");
	scanf("%d",&b);

	if (a%b==0)
	{
		printf("%d is divisible by %d",a,b);
	}
	else
	{
		printf("%d is not divisible by %d",a,b);
	}
}
