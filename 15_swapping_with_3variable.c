#include <stdio.h>
int main()
{
    int a, b, swap;

    printf("\n\nENTER THE VALUE FOR SWAPPING");
    printf("\nENTER THE VALUE OF a = ");
    scanf("%d", &a);
    printf("\nENTER THE VALUE OF b = ");
    scanf("%d", &b);

    swap = b, b = a, a = swap;

    printf("\n\nAFTER SWAPPING");
    printf("\nVALUE OF a = %d", a);
    printf("\nVALUE OF b = %d", b);
    return 0;
}