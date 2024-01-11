#include <stdio.h>

int main()
{
    int n, i=0;

    printf("ENTER THE POSITIVE NUMBER TO COUNT THE NUMBER OF DIGITS = ");
    scanf("%d", &n);

    if (n==0)
    {
        printf("1 DIGIT NUMBER");
    }
    else{
        for ( n; n != 0;i++)
        {
            printf("%d\n",n);
            n = n / 10;
        }
            printf("%d DIGIT NUMBER",i);
    }
    return 0;
}