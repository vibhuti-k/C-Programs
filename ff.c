#include <stdio.h>

int main()
{
    int arr1[10], arr2[10], arr3[20], i, j, k=0, p, q ;
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
        for(j = 0; j < q; j++)
        {
            if(arr1[i] !=arr2[j])
            {
                arr3[k] = arr1[i];
                k++;
                arr3[k] = arr2[j];
                k++;
            }
            else
            {
                arr3[k] = arr1[i];
            }
        }
    }
    

    return 0;
}
