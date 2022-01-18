//Print all natural numrers using while loop upto Nth values.
#include <stdio.h>
void main()
{
    int N,i=1;
    printf("Enter the range ending : ");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d ",i);
        i++;
    }
}
