//Print fibbonaci series up to a range.
#include <stdio.h>
void main()
{
    int n,a=0,b=1,c;
    printf("Enter the range ending : ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("%d",a);
    }
    else if(n==2)
    {
        printf("%d,%d",a,b);
    }
    else
    {
        printf("%d,%d",a,b);
        while(n>=3)
        {
            c=a+b;
            printf(",%d",c);
            a=b;
            b=c;
            n--;
        }
    }
}
