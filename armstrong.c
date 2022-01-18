//Write a program to check weather the number is armstrong or not.
#include <stdio.h>
void main()
{
    int n, r, p, s=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    p = n;
    while(n != 0)
    {
        r = n % 10;
        s = s + (r * r * r);
        n = n / 10;
    }
    if(p == s)
    {
        printf("%d is armstrong.",p);
    }
    else
    {
        printf("%d is not armstrong.",p);
    }
}
