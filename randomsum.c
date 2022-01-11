//Program to find sum of random natural numbers.
#include <stdio.h>
void main()
{
    int n,i=1,s=0,a;
    printf("Enter the number of numbers you will enter : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("Enter the %d number : ",i);
        scanf("%d",&a);
        s=s+a;
        i++;
    }
    printf("%d is sum of numbers.",s);
}
