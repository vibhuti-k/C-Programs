/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to check : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is even.",n);
    }
    else
    {
        printf("%d is odd.",n);
    }

    return 0;
}
