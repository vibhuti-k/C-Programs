//Write a program to calculate simple interest.
#include <stdio.h>
void main()
{
    float P,R,T,I;
    printf("Enter the value of P, R and T : ");
    scanf("%f%f%f",&P,&R,&T);
    I = (P*R*T)/100;
    printf("%f is the simple interest.",I);
}
