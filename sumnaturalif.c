//Print sum of all the natural numbers upto Nth values.
#include <stdio.h>
void main()
{
    int N,S=0;
    printf("Enter the range ending : ");
    scanf("%d",&N);
    while(N>0)
    {
        S=S+N;
        N--;
    }
    printf("%d is the sum.",S);
}
