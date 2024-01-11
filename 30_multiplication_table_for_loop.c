#include <stdio.h>

int main()
{
    int num,i=1,a;

    printf("\nENTER THE NUMBER TO PRINT MUTIPLICATION TABLE = ");
    scanf("%d", &num);

    for (; i <= 10; i++)
    {
        a = num * i;
        printf("%d * %d = %d\n", num,i,a);
    }
    return 0;
}