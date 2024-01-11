#include<stdio.h>

int main()
{
	int  j, i,mult=1;// MULTI TABLES IN FORMATED 2,  4
                    //                           4.  8
                    //                           ;   ;
                    //                           20  40
 
	for (j = 1; j <= 10; j++)
	{
		for (i = 1; i <= 7; i++)
		{
			mult = j*i;
			printf("%d\t",mult);
		}
        printf("\n");
	}
 
    return 0;
}