/*Print this pattern
      *
    * *
  * * *
* * * * 
*/
#include <stdio.h>
void main()
{
    int n, i, j, s;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=1 ; i <= n; i++)
    {
        for(s = n - i; s >= 1; s--)
        {
            printf("  ");
        }
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
