//To find the multiplication table

#include <stdio.h>
void main()
{
	int i,j;
	printf("Enter any number: ");
	scanf("%d",&i);
	printf("The multiplication table of %d\n",i);
	for(j=1;j<=10;j++)
	{
	printf("%d * %d = %d\n",i,j,i*j);
	}
}
