#include<stdio.h>
//
// A 
// A B
// A B C
// A B C D
int main()
{
	int  i;
	char j='A';
	for (i = 65; i <= 68; i++)
	{
		for (j =65; j <=i; j++)
		{
			printf(" %c ", j); 
		}
		printf("\n");
	}
    printf("i = %d,  j = %d",i,j);
    
    return 0;
}