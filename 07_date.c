//Use of scanf and printf

#include <stdio.h>


void main()
{
	int year,month,day;
	printf("Enter the date:");
	scanf("%d/%d/%d",&year,&month,&day);
	printf("%d/%d/%d",year,month,day);

}
