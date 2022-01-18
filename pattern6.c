/*Print this pattern.
1
2 3
4 5 6
7 8 9 10 
*/
#include <stdio.h>
void main()
{
    int n, i, j=1, s = 1;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=1 ; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ",s);
            s++;
        }
        printf("\n");
    }
}
