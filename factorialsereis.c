//Display the sum of factorial series upto N.
#include <stdio.h>
void main()
{
    int N,i,j,fact,sum=0;
    printf("Enter the range ending : ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }
    printf("%d",sum);
}
