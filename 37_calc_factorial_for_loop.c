#include <stdio.h>

int main()
{
    int num, fact=1, i=1;

    printf("\nENTER THE NUMBER TO CALC FACTORIAL = ");
    scanf("%d", &num);

    for ( i; i <= num; i++)
    {
        fact=i*fact;
    }
    printf("\nfactorial of %d is %d", num,fact);
    return 0;
}