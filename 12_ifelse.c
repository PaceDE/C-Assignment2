//To find the given number is even or odd

#include <stdio.h>
void main()
{
	int num,rem;
	printf("Enter a number:");
	scanf("%d",&num);
	rem = num%2;
	if(rem==0)
	{
		printf("\nThe number is even.");
	}
	else
	{
		printf("\nThe number is odd.");
	}
}
