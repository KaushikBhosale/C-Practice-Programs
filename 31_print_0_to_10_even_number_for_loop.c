#include <stdio.h>

int main()
{
    int num = 0,a=0,b;
    for ( num; num < 11; num++)
    {
        b = num%2;
        if (b==a)
            printf("\n%d", num);
    }
    return 0;
}