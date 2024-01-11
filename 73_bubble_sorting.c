#include <stdio.h>
// Buble Sorting

int main()
{
    int a[] = {6,9,3,5,6}; // Array of Size 5

    printf("\nArray Before Sorting\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");
    int i, j, temp;
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j < (5 - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                // swap
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nArray After Sorting\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}