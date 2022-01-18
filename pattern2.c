/*Print this pattern
* * * *
* * *
* *
*  
*/
#include <stdio.h>
void main()
{
    int n, j;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(n ; n >= 1; n--)
    {
        for(j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
