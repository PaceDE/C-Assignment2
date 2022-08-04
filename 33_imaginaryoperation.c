/*Program to add, subtract, multiply and divide two complex
numbers using switch statement*/

#include <stdio.h>

void main()
{
	int a,b,x,y;
	char op;

	printf("Enter first complex number of the form (a+bi):");
	scanf("%d+%di", &a, &b);
	printf("\nEnter second complex number of the form (x+yi):");
	scanf("%d+%di", &x, &y);

	printf("\nEnter one of the operators among (+, -, *, /):");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':
			printf("(%d+%di) + (%d+%di) : %d+%di",a,b,x,y,a+x,b+y);
			break;
		case '-':
			if (b-y<0)
			{
				printf("(%d+%di) - (%d+%di) : %d%di",a,b,x,y,a-x,b-y);
			}
			else

			{
				printf("(%d+%di) - (%d+%di) : %d+%di",a,b,x,y,a-x,b-y);
			}
			break;
		case '*':
			printf("(%d+%di) * (%d+%di) : %d+%di",a,b,x,y,a*x-b*y,a*y+b*x);
			break;
		case '/':
			printf("(%d+%di) / (%d+%di) : %d+%di",a,b,x,(a*x+b*y)/(x*x+y*y),(b*x+a*y)/(x*x+y*y));
			break;
		default:
			printf("Invalid Operator.");
	}
}
