//Write a program to check for even or odd.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to check : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is even.",n);
    }
    else
    {
        printf("%d is odd.",n);
    }

    return 0;
}
