//Compute the area of trainge

#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c,s,area;
    printf("Enter the sides of traingle : ");
    scanf("%d%d%d",&a,&b,&c);
    s = (a+b+c)/2;
    a = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%d is the area of the traingle.",a);
}
