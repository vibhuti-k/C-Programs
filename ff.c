#include <stdio.h>

int main()
{
    int arr1[10], arr2[10], arr3[20], i, j, k=0, p, q,x,y ;
    printf("Enter the number of element you want in array 1 : ");
    scanf("%d",&p);
    for(i = 0; i < p; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the number of element you want in array 2 : ");
    scanf("%d",&q);
    for(j = 0; j < q; j++)
    {
        scanf("%d",&arr2[j]);
    }
    for(i = 0; i < p; i++)
    {
        arr3[k] = arr1[i];
        k++;
    }
    for(j = 0; j < q; j++)
    {
        arr3[k] = arr2[j];
        k++;
    }
   
   
    /*for(i = 0; i < p+q; i++)
    {
        for(j = 0; j < p+q-i; j++)
        {
            if(arr3[j] > arr3[j+1])
            {
                arr3[j] = x;
                arr3[j] = arr3[j+1];
                arr3[j+1] = x;
            }
        }
    }*/
    for(i = 0; i < k; k++)
    {
        printf("%d, ",arr3[i]);
    }

    return 0;
}
