//Write a program to calculate average marks of five subjects.
#include <stdio.h>
void main()
{
    int P,E,M,C,S,A;
    printf("Enter the marks of physics, electrical, maths, computer and soft skill out of 60 : ");
    scanf("%d%d%d%d%d",&P,&E,&M,&C,&S);
    A = (P+E+M+C+S)/5;
    printf("%d is the Average marks.",A);
}
