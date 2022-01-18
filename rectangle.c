//Write a program to calculate area and parameter of rectangle.
#include <stdio.h>
void main()
{
    int a,b,l,p;
    printf("Enter the length and breath : ");
    scanf("%d%d",&l,&b);
    a = l*b;
    p = 2*(l+b);
    printf("The area of the rectangle is %d.",a);
    printf("The parameter of the ractangle is %d.",p);
}
