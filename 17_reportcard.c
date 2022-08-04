//To create a report card

#include <stdio.h>
void main()
{
	int iit,phy,maths,dl,c;
	int percentage;

	printf("Enter the marks of IIT:");
	scanf("%d",&iit);
	printf("Enter the marks of PHY:");
	scanf("%d",&phy);
	printf("Enter the marks of MATH:");
	scanf("%d",&maths);
	printf("Enter the marks of DL:");
	scanf("%d",&dl);
	printf("Enter the marks of C:");
	scanf("%d",&c);

	percentage = (iit+phy+maths+dl+c) / 5;
	printf("Percentage:%d%% \n",percentage);

	if (percentage>=80)
	{
		printf("Distinction.");
	}
	else if(percentage>=70 && percentage<=79)
	{
		printf("First Division.");
	}
	else if (percentage>=60 && percentage<=69)
	{
		printf("Second Division.");
	}
	else if (percentage>=50 && percentage<=59)
	{
		printf("Third Division.");
	}
	else
	{
		printf("Fail.");
	}
}
