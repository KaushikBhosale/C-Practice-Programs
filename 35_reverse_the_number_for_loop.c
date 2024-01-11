#include <stdio.h>

int main()
{
    int n, rev = 0;

    printf("ENTER THE NUMBER TO REVERSE = ");
    scanf("%d", &n);

    for ( n; n != 0;)
    {
        rev = rev * 10 + n%10;
        n = n / 10;
    }
        printf("\nRevers Number = %d", rev);
    return 0;
}