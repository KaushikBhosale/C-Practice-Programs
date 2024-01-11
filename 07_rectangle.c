#include <stdio.h>
int main()
{
    int a, b, c;

    printf("\nENTER THE SIDE 1 ");
    scanf("%d", &a);

    printf("\nENTER THE SIDE 2 ");
    scanf("%d", &b);

    c = a * b;

    printf("\nAREA OF RECTANGLE = %d sq", c);

    return 0;
}