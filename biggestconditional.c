//Write a program to find largest of three numbers using conditional operator.
#include <stdio.h>
void main()
{
    int a, b, c, big;
    printf("Enter the numbers a, b, and c : ");
    scanf("%d%d%d", &a, &b, &b);
    big = (a > b && a > c ? a : b > c ? b : c);
    printf("The biggest number is %d.",big);
}
