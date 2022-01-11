//Sum of odd and even numbers between 1 to N.
#include <stdio.h>
void main()
{
    int n,se=0,so=0;
    printf("Enter the range ending : ");
    scanf("%d",&n);
    while(n>0)
    {
        if(n%2==0)
        {
            se = se + n;
            n--;
        }
        else
        {
            so = so + n;
            n--;
        }
    }
    printf("%d is sum of even numbers.\n",se);
    printf("%d is sum of odd numbers.",so);
}
