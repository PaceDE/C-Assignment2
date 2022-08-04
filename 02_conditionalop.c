//Use of Conditional Operators

#include <stdio.h>

void main()
{
	int a,b,larger;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	larger = a>b?a:b;
	printf("The larger number is %d",larger);
}
