//Print sum of even and odd numbers upto N without using if statement.
#include <stdio.h>
void main()
{
    int N,i=2,j=1,se=0,so=0;
    printf("Enter the range ending : ");
    scanf("%d",&N);
    while(i<=N)
    {
        se=se+i;
        i=i+2;
    }
    while(j<=N)
    {
        so=so+j;
        j=j+2;
    }
    printf("%d is sum of even numbers.\n",se);
    printf("%d is sum of odd numbers.",so);
}
