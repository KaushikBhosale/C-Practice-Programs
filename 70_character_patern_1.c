#include<stdio.h>
//
// A
// A A
// A A A
// A A A A
int main()
{
	int  i, j;
	for (i = 1; i <= 4; i++)
	{
		for (j =1; j <=i; j++) 
		{
			printf(" A "); 
		}
		printf("\n");
	}
    printf("i = %d,  j = %d",i,j);
    
    return 0;
}