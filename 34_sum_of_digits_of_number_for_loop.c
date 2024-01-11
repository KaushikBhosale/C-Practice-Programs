#include <stdio.h>

int main()
{
    int n, add = 0;

    printf("ENTER THE NUMBER TO SUM OF THE DIGITS = ");
    scanf("%d", &n);

    for ( n; n != 0;)
    {
        add = add + n%10;
        n = n / 10;
    }
        printf("= %d",add);
    return 0;
}