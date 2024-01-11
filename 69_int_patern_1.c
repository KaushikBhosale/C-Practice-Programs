#include<stdio.h>
// 
// 1
// 1 1
// 1 1 1
// 1 1 1 1
// 1 1 1 1 1
int main()
{
	int  i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j =1; j <=i; j++) 
		{
			printf(" 1 "); 
		}
		printf("\n");
	}
    printf("i = %d,  j = %d",i,j);
    
    return 0;
}