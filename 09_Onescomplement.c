#include<stdio.h>
void main()
{
    unsigned int num1=57; //0000 0000 0000 0000 0000 0000 0011 1001
    unsigned int num2;
    num2=~num1;           //1111 1111 1111 1111 1111 1111 1100 0110
    printf("num2=>%u",num2);
}
