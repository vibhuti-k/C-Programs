//Write a program using for loop to check weather the number is prime or not.
#include <stdio.h>
void main()
{
    int n, i, s=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for(i=1; i <= n; i++)
    {
        if(n % i == 0)
        {
            s++;
        }
    }
    if(s == 0)
    {
        printf("%d is prime.",n);
    }
    else
    {
        printf("%d is not prime.",n);
    }
}
