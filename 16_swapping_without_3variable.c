#include <stdio.h>
int main()
{
    int a, b;

    printf("\n\nENTER THE VALUE FOR SWAPPING");
    printf("\nENTER THE VALUE OF a = ");
    scanf("%d", &a);
    printf("\nENTER THE VALUE OF b = ");
    scanf("%d", &b);

    a = a + b; // 2 + 3 = 5
    b = a - b; // 5 - 3 = 2
    a = a - b; // 5 - 2 = 3

    printf("\n\nAFTER SWAPPING");
    printf("\nVALUE OF a = %d", a);
    printf("\nVALUE OF b = %d", b);
    return 0;
}