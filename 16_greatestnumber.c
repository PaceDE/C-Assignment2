//To find the greatest number between three numbers

#include <stdio.h>
void main()
{
	int a,b,c;

	printf("Enter 3 numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
	printf("\n%d is the greatest number.",a);
	}
	else if(b>c)
	{
	printf("\n%d is the greatest number.",b);
	}
	else
	{
	printf("\n%d is the greatest number.",c);
	}
}
