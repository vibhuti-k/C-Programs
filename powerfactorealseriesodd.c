//1-x+(x^2/2!)-(x^3/3!)+.....+(x^n/n!)
#include <stdio.h>
#include<math.h>
void main()
{
    float N,x,i,j,fact=1,power,sum=0;
    printf("Enter the range ending : ");
    scanf("%f", &N);
    printf("Enter the value of x : ");
    scanf("%f",&x);
    for(i=1; i<=N; i++)
    {
        power=pow(-x,i);
        fact *= i;
        sum += (power/fact);
    }
    printf("%f", sum+1);
}
