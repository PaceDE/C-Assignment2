//To find the sum of natural number

#include <stdio.h>

void main()
{
	int i,num,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		sum = sum + i;
	}
	printf("Sum of first %d natural number is %d",num,sum);
}
