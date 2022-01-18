//Write a program to check weather the number is pallindrome or not.
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
        s = s*10 + r;
        n = n / 10;
    }
    if(p == s)
    {
        printf("%d is pallendrome.",p);
    }
    else
    {
        printf("%d is not pallendrome.",p);
    }
}
