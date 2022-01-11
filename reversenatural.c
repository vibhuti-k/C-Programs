//Print all the natural numbers in reverse order upto N.
#include <stdio.h>
void main()
{
    int N;
    printf("Enter the range ending : ");
    scanf("%d",&N);
    while(N>0)
    {
        printf("%d ",N);
        N--;
    }
}
