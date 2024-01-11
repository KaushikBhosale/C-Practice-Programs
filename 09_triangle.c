#include <stdio.h>
int main()
{
    const float c = 0.5;
    int b, h;

    printf("\nENTER THE VALUE OF  BASE  =");
    scanf("%d", &b);

    printf("\nENTER THE VALUE OF HEIGHT =");
    scanf("%d", &h);


    float res = c * b * h;

    printf("\nTHE AREA OF TRIANGLE = %f sq", res);
    return 0;
}