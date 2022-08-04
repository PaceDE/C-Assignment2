//To find the sum of square of natural number

#include <stdio.h>

void main()
{
	int num,sum=0;
	printf("Enter the number");
	scanf("%d",&num);
	for (int i=1;i<=num;i++)
	{
		sum = sum + i*i;
	}
	printf("Sum of square of first %d natural number is %d",num,sum);
}
