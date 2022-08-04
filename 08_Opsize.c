//Finding the memory occupied by different data types

#include <stdio.h>


int main()
{
	int num;
	printf("Integer Occupies=> %d bytes\n",sizeof(num));
	printf("Double Constant Occupies=> %d bytes\n",sizeof(16.18));
	printf("Long Int Data Type Occupies=> %d bytes\n",sizeof(15L));
	printf("Float Data Type Occupies=> %d bytes",sizeof(float));

}
