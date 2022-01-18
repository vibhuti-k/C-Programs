//Write a program to find sum of digits of the numbers.
#include <stdio.h>
void main()
{
    int n, r, s=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    while(n != 0)
    {
        r = n % 10;
        s = s + r;
        n = n / 10;
    }
    printf("%d is the sum of the digits.",s);
}
