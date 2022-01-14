//Print all the alphabets from A to Z using ASCII code.
#include <stdio.h>
void main()
{
    char ch;
    printf("Upper case alphabets : ");
    for(ch=65;ch<=90;ch++)
    {
        printf("%c ",ch);
    }
    printf("\nLower case alphabets : ");
    
    for(ch=97;ch<=122;ch++)
    {
        printf("%c ",ch);
    }
}
