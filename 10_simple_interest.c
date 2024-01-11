#include <stdio.h>
int main()
{
    float si, p, r, t;
    const float  d = 100;

    printf("\nENTER THE PRINCIPLE AMOUNT ");
    scanf("%f", &p);

    printf("\nENTER THE RATE OF INTEREST ");
    scanf("%f", &r);

    printf("\nENTER THE RATE OF TIME in YEARS ");
    scanf("%f", &t);

    si = (p * r * t)/d;

    printf("\nSIMPLE INTEREST = %f", si);

    return 0;
}