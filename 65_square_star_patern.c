#include<stdio.h>

// * * * *
// * * * *
// * * * *
// * * * *
int main()
{
	int  i, j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
    printf("i = %d,  j = %d",i,j);
    
    return 0;
}
