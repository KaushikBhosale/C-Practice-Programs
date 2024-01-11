#include <stdio.h>

int main ()
{
    int a,b;

    printf("ENTER THE VALUE OF a : ");
    scanf("%d", &a);

    printf("ENTER THE VALUE OF b : ");
    scanf("%d", &b);

    printf("\nADD      a+b = %d",a+b);
    printf("\nSUB      a-b = %d",a-b);
    printf("\nMULTIPLY a*b = %d",a*b);
    printf("\nDIVIDE   a/b = %d",a/b);
    printf("\nMODULUS a//b = %d",b%a);
    return 0;
}