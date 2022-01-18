//Write a program to check weather a given number is even or odd using conditional operator.
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number to check : ");
    scanf("%d",&n);
    n%2==0?printf("%d is even.",n):printf("%d is odd.",n);
}
