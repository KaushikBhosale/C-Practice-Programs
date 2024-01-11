#include <stdio.h>
int main()
{
    float rd, res;
    const float pie = 3.14;

    printf("\nENTER THE RADIUS = ");
    scanf("%f", &rd);

    res = pie*rd*rd;
    printf("AREA OF CIRCLE = %f sq", res);

    return 0;
}