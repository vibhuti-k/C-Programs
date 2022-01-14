//Display prime numbers 1 to N using for loop.
#include <stdio.h>
void main()
{
    int N,i,j,s;
    printf("Enter the number upto which you want to find prime numbers : ");
    scanf("%d",&N);
    printf("Prime numbers are : ");
    for(i=1;i<=N;i++)
    {
        s=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                s++;
            }
        }
        if(s==2)
        {
            printf("%d ",i);
        }
    }
}
