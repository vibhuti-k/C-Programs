/*Print this pattern
      A
    A B
  A B C
A B C D 
*/
#include <stdio.h>
void main()
{
    int n, i, s;
    char j;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=1 ; i <= n; i++)
    {
        for(s = n - i; s >= 1; s--)
        {
            printf("  ");
        }
        for(j = 65; j <= 64 + i; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}
