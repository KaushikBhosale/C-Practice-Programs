#include <stdio.h>
//      *
//     ***
//    *****
//   *******
//  *********
//   *******
//    *****
//     ***
//      *      
int main() 
{
        for(int i=1;i<=5;i++) //  Triangle
        {
            for(int j=5;j>=i;j--)
            {
                printf(" ");
            }
            for(int k=1;k<=i;k++)
            {
                printf("*");
            }
            for(int l=2;l<=i;l++)
            {
                printf("*");
            }
            printf("\n");
        }

// ------------------------------------------------------

        for(int i=4;i>=1;i--) // Reverse Triangle
        {
            for(int j=5;j>=i;j--)
            {
                printf(" ");
            }
            for(int k=1;k<=i;k++)
            {
                printf("*");
            }
            for(int l=2;l<=i;l++)
            {
                printf("*");
            }
            printf("\n");
        }

    return 0;
}