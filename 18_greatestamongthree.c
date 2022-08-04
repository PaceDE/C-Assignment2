//To find the greatest number among three numbers using if and else

#include <stdio.h>
void main()
{
	int n1,n2,n3;

	printf("Enter 3 numbers:\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("\n%d is the greatest number.",n1);
		}
		else
		{
			printf("\n%d is the greatest number.",n3);
		}
	}

	else
	{
		if(n2>n3)
		{
			printf("\n%d is the greatest number.",n2);
		}
		else
		{
			printf("\n%d is the greatest number.",n3);
		}
	}
}
