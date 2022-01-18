//Write a program to swap to numbers without using third variable.
#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter the values of a and b : ");
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The swaped value of a is %d and b is %d.",a,b);
}
