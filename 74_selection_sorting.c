#include <stdio.h>
// Selection Sorting

int main()
{
    int a[] = {4,1,8,2,9}; // Array of Size 5

    printf("\nArray Before Sorting\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");
 
	int i,j,temp,smallest;
	for(i = 0; i < (5-1) ; i++)
	{
		smallest=i;
		for(j = i + 1; j < 5; j++)
		{
			if(a[smallest] > a[j])
			smallest=j;
		}
		if(smallest != i)
		{
			temp=a[i];
			a[i]=a[smallest];
			a[smallest]=temp;
		}
	}

    printf("\nArray After Sorting\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}